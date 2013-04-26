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
            scale = d3.time.scale()
                .domain(extent)
                .rangeRound([0, container.clientWidth])
                .nice(d3.time.week),
            charts = [
                Amani.barChart()
                    .dimension(dimension)
                    .group(dates)
                    .interval(d3.time.day)
                    .x(scale)
                    .filter()
            ];

        this.chart = d3.selectAll('.timeline-filter-chart').data(charts).each(function (chart) {
            chart.on('brush', render).on('brushend', render);
        });

        this.update();
    },

    update: function () {
        this.chart.each(function (method) {
            d3.select(this).call(method);
        });
    }
});

