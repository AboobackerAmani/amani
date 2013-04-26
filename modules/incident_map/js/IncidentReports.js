Amani.IncidentReports = LF.Plugin.extend({

    initialize: function (options) {
        LF.Plugin.prototype.initialize.call(this, options);

        this._dimensions = {};
        this._filters = {};
    },

    enable: function (map) {
        var url = this.options['source-url'];

        reqwest({ url: url, type: 'json', success: L.Util.bind(this._onLoad, this) })
        this._map = map;
    },

    _onLoad: function (resp) {
        var container = null,
            date_format = d3.time.format("%Y-%m-%dT%H:%M:%S");

        resp.features.forEach(function (f, i) {
            f.properties.date = date_format.parse(f.properties.date);
        });

        this._cf = crossfilter(resp.features);

        this._layer_dimension = this._cf.dimension(function (f) { return f.properties.uri; });
        this._layer = L.geoJson(this._layer_dimension.top(Infinity));

        if ('controls-container' in this.options) {
            container = document.getElementById(this.options['controls-container'])
        }

        _.each(this.options.filters, function (options) {
            options.container = container;
            this._addFilter(options);
        }, this);

        this._layer.addTo(this._map);

        var date = this._cf.dimension(get_day),
            dates = date.group(),
            extent = d3.extent(resp.features, get_day),
            scale = d3.time.scale()
                .domain(extent)
                .rangeRound([0, container.clientWidth])
                .nice(d3.time.week),
            charts = [
                Amani.barChart()
                    .dimension(date)
                    .group(dates)
                    .interval(d3.time.day)
                    .x(scale)
                    .filter()
            ];

        var render_all = this._renderAll.bind(this);
        this.chart = d3.selectAll('.chart').data(charts).each(function (chart) {
            chart.on('brush.hello', render_all).on('brushend', render_all);
        });

        this._renderAll();

        function get_day(f) {
            return d3.time.day(f.properties.date);
        }

    },

    _renderAll: function () {
        this._layer.clearLayers();
        this.chart.each(this._renderChart);
        _.each(this._filters, function (value) { value.update() });
        this._layer.addData({ type: 'FeatureCollection', features: this._layer_dimension.top(Infinity) });
    },

    _renderChart: function (method) {
        d3.select(this).call(method);
    },

    _addFilter: function (options) {
        var dimension = this._cf.dimension(function (f) { return f.properties[options.key] || options.empty; }),
            filter = Amani.filterControl({ dimension: dimension, type: options.type });

        filter.on('filter', function (e) {
            dimension.filterAll();
            dimension.filter(function (f) {
                return e.active.length === 0 ? true : _.contains(e.active, f);
            });
            this._renderAll();
        }, this);

        if (options.container) {
            options.container.appendChild(filter.onAdd(this._map));
        }
        else {
            filter.addTo(this._map);
        }

        this._dimensions[options.key] = dimension;
        this._filters[options.key] = filter;

        return filter;
    }
});
