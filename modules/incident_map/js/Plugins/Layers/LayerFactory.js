Amani.LayerFactory = L.Class.extend({

    initialize: function (options) {
        L.setOptions(this, options);
    },

    layer: function (definition) {
        if (definition.provider in this) {
            var factory = this[definition.provider];
            return factory.call(this, definition);
        }
        else {
            throw new Error('Unknown layer provider: ' + definition.provider);
        }
    }

});

Amani.LayerFactory.include({
    google: function (definition) {
        return L.google(definition.set, definition.options);
    }
});

Amani.LayerFactory.include({
    tilelayer: function (definition) {
        var url = definition.urlTemplate;
        return L.tileLayer(url, definition.options);
    }
});
