Amani.IncidentReports = LF.Plugin.extend({

    initialize: function (options) {
        LF.Plugin.prototype.initialize.call(this, options);

        this._filters = [];
        this._markers = L.layerGroup();
    },

    enable: function (map) {
        var url = this.options['source-url'];

        this._toggle = Amani.toggle({ name: 'markerclusterer' }).addTo(map),
        this._toggle.on('toggle', this._render, this);

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

        for (i in this.options.filters) {
            definition = this.options.filters[i];
            filter = filter_factory.filter(cf, resp.features, definition);
            filter.on('render', this._render, this);
            this._filters.push(filter);
        }

        this._render();
        this._markers.addTo(this._map);
    },

    _setData: function (features) {
        var markers = features.map(this._marker, this);
        this._markers.eachLayer(function (layer) { layer.addLayers(markers) });
    },

    _marker: function (feature) {
        return L.GeoJSON.geometryToLayer(feature, function (geojson, latlng) {
            var markup = geojson.properties.teaser || null;
            if (!markup) {
                markup = L.DomUtil.create('h3', 'incident-report-popup-title');
                var link = L.DomUtil.create('a', null, markup);
                link.href = geojson.properties.uri;
                link.textContent = geojson.properties.title;
            }
            return L.marker(latlng).bindPopup(markup).setIcon(this._icon(geojson.properties));
        }.bind(this));
    },

    _icon: function (properties) {
        return L.icon({ iconUrl: properties.iconUrl || L.Icon.Default.imagePath + '/marker-icon.png' });
    },

    _render: function () {
        this._filters.forEach(function (filter) { filter.update(); });
        this._markers.clearLayers();
        this._markers.addLayer(this._toggle.enabled() ? new L.MarkerClusterGroup() : L.featureGroup());
        this._setData(this._dimension.top(Infinity));
    }
});

L.LayerGroup.include({
    addLayers: function (layers) {
        layers.forEach(function (layer) {
            this.addLayer(layer);
        }, this);
    }
});
