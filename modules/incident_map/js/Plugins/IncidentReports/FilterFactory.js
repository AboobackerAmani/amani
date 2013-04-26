Amani.FilterFactory = L.Class.extend({
    initialize: function (options) {
        L.setOptions(this, options);
    },

    filter: function (cf, data, definition) {
        if (definition.provider in this) {
            var factory = this[definition.provider];
            return factory.call(this, cf, data, definition);
        }
        else {
            throw new Error('Unknown filter provider: ' + definition.provider);
        }
    }
});

Amani.Filter = L.Class.extend({
    includes: L.Mixin.Events,

    render: function () {
        this.fire('render');
    },

    update: function () {}
});
