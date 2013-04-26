Amani.IncidentReports = LF.Plugin.extend({

    initialize: function (options) {
        LF.Plugin.prototype.initialize.call(this, options);

        this._dimensions = {};
        this._filters = [];
    },

    enable: function (map) {
        var url = this.options['source-url'];
        jQuery.get(url, L.Util.bind(this._onLoad, this));
        this._map = map;
    },

    _onLoad: function (resp) {
        var i, filter, cf, definition,
            date_format = d3.time.format("%Y-%m-%dT%H:%M:%S"),
            filter_factory = new Amani.FilterFactory();

        resp.features.forEach(function (f) {
            f.properties.date = date_format.parse(f.properties.date);
        });

        cf = crossfilter(resp.features);
        this._dimension = cf.dimension(function (f) { return f.properties.uri; });
        this._layer = L.geoJson().addTo(this._map);

        for (i in this.options.filters) {
            definition = this.options.filters[i];
            filter = filter_factory.filter(cf, resp.features, definition);
            filter.on('render', this._render, this);
            this._filters.push(filter);
        }

        this._render();
    },

    _render: function () {
        this._filters.forEach(function (filter) { filter.update(); });
        this._layer.clearLayers();
        this._layer.addData({
            type: 'FeatureCollection',
            features: this._dimension.top(Infinity)
        });
    }
});
