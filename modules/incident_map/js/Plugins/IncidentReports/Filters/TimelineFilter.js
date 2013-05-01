Amani.FilterFactory.include({
    timeline: function (cf, data, options) {
        var get_day = function (f) { return d3.time.day(f.properties.date); },
            dimension = cf.dimension(get_day),
            extent = d3.extent(data, get_day),
            container = document.getElementById(options.container);

        return new Amani.TimelineFilter(dimension, extent, container);
    }
});

Amani.TimelineFilter = Amani.Filter.extend({
    initialize: function (dimension, extent, container) {
        var render = this.render.bind(this),
            dates = dimension.group(),
            margin = { top: 10, right: 15, bottom: 20, left: 15 },
            height = 60,
            width = container.clientWidth - margin.left - margin.right,
            scale = d3.time.scale()
                .domain(extent)
                .rangeRound([0, width])
                .nice(d3.time.week),
            charts = [
                Amani.barChart()
                    .dimension(dimension)
                    .group(dates)
                    .interval(d3.time.day)
                    .x(scale)
                    .y(d3.scale.linear().range([height, 0]))
                    .margin(margin)
                    .filter()
            ],
            containers = charts.map(function () {
                return L.DomUtil.create('div', 'timeline-filter-chart', container);
            });

        this.chart = d3.selectAll(containers).data(charts).each(function (chart) {
            chart.on('brush', render).on('brushend', render);
        });

        L.DomEvent.on(window, 'resize', function () {
            var width = container.clientWidth - margin.left - margin.right;
            scale.rangeRound([0, width]);
            this.update();
        }, this);

        this.update();
    },

    update: function () {
        this.chart.each(function (method) {
            d3.select(this).call(method);
        });
    },

    reset: function () {
        this.chart.each(function (method) {
            method.filter();
        });
    }
});

