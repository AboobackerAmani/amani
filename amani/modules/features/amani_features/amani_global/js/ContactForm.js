var AmaniGlobal = {}
AmaniGlobal.ContactForm = LF.Plugin.extend({

    enable: function (map) {
        var points = this.options['points'];
        L.marker([points[0], points[1]]).addTo(map);
    },
});
