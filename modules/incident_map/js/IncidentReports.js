Amani.IncidentReports = LF.Plugin.extend({
    enable: function (map) {
        var url = this.options['source-url'];

        reqwest({ url: url, type: 'json', success: L.Util.bind(this._onLoad, this) })
        this._map = map;
    },

    _onLoad: function (resp) {
        var layer = L.geoJson(resp),
            cf = crossfilter(resp.features),
            by_type = cf.dimension(function (f) { return f.properties.type || "No type specified"; }),
            type_values = by_type.group().all().map(function (f) { return f.key; }),
            type_filter = Amani.filterControl({ filters: type_values }),
            by_severity = cf.dimension(function (f) { return f.properties.severity || "No severity specified"; }),
            severity_values = by_severity.group().all().map(function (f) { return f.key; }),
            severity_filter = Amani.filterControl({ filters: severity_values });

        type_filter.on('filter', function (e) {
            by_type.filterAll();
            by_type.filter(function (f) {
                return e.active.length === 0 ? true : _.contains(e.active, f);
            });
            resp.features = by_type.top(Infinity);
            layer.clearLayers();
            layer.addData(resp);
        });

        severity_filter.on('filter', function (e) {
            by_severity.filterAll();
            by_severity.filter(function (f) {
                return e.active.length === 0 ? true : _.contains(e.active, f);
            });
            resp.features = by_severity.top(Infinity);
            layer.clearLayers();
            layer.addData(resp);
        });

        type_filter.addTo(this._map);
        severity_filter.addTo(this._map);
        layer.addTo(this._map);
    }
});

Amani.FilterControl = L.Control.extend({
    includes: L.Mixin.Events,

    options: {
        position: 'topright',
        filters: [],
    },

    initialize: function (options) {
        L.setOptions(this, options);
    },

    onAdd: function (map) {
        this._initLayout();

        this.options.filters.forEach(function (filter) {
            this._addItem(filter);
        }, this);

        return this._container;
    },

    onRemove: function (map) {

    },

    _initLayout: function () {
        var class_name = 'leaflet-control-filter',
            container = this._container = L.DomUtil.create('div', class_name);

        if (!L.Browser.touch) {
            L.DomEvent.disableClickPropagation(container);
            L.DomEvent.on(container, 'mousewheel', L.DomEvent.stopPropagation);
        } else {
            L.DomEvent.on(container, 'click', L.DomEvent.stopPropagation);
        }

        var form = this._form = L.DomUtil.create('form', class_name + '-list');

        container.appendChild(form);
    },

    _addItem: function (filter) {
        var label = L.DomUtil.create('label'),
            input = L.DomUtil.create('input');

        input.type = 'checkbox';
        input.className = 'leaflet-control-filter-selector';

        input.value = filter;

        L.DomEvent.on(input, 'click', this._onInputClick, this);

        var name = L.DomUtil.create('span');
        name.innerHTML = ' ' + filter;

        label.appendChild(input);
        label.appendChild(name);

        this._form.appendChild(label);

        return label;
    },

    _onInputClick: function () {
        var i, len, input,
            active_filters = [],
            inputs = this._form.getElementsByTagName('input');

        for (i = 0, len = inputs.length; i < len; i++) {
            input = inputs[i];
            if (input.checked) active_filters.push(input.value);
        }

        this.fire('filter', { active: active_filters });
    },

    _createFilter: function (title, filter, container, fn, context) {
        var class_name = 'filter-' + filter.replace(/[\s\W_]/, '-').toLowerCase(),
            item = L.DomUtil.create('li', null, container),
            link = L.DomUtil.create('a', class_name,item);

        link.innerHTML = title;
        link.href = '#';
        link.title = title;

        var stop = L.DomEvent.stopPropagation;

        L.DomEvent
            .on(link, 'click', stop)
            .on(link, 'mousedown', stop)
            .on(link, 'dblclick', stop)
            .on(link, 'click', L.DomEvent.preventDefault)
            .on(link, 'click', fn, context);

        return item;
    },
});

Amani.filterControl = function (options) {
    return new Amani.FilterControl(options);
};
