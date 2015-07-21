
(function ($) {
  Drupal.color = {
    logoChanged: false,
    callback: function(context, settings, form, farb, height, width) {
      // Change the logo to be the real one.
      if (!this.logoChanged) {
        $('#preview #preview-logo img').attr('src', Drupal.settings.color.logo);
        this.logoChanged = true;
      }
      // Remove the logo if the setting is toggled off. 
      if (Drupal.settings.color.logo == null) {
        $('div').remove('#preview-logo');
      }

      //Header background
      $('#preview #preview-header', form).css('background-color', $('#palette input[name="palette[header]"]', form).val());

      // Solid background.
      $('#preview', form).css('backgroundColor', $('#palette input[name="palette[bg]"]', form).val());

      // Text preview.
      $('#preview #preview-main h2, #preview .preview-content', form).css('color', $('#palette input[name="palette[text]"]', form).val());
      $('#preview #preview-content a', form).css('color', $('#palette input[name="palette[link]"]', form).val());

      // Sidebar block.
      $('#preview #preview-sidebar #preview-block', form).css('background-color', $('#palette input[name="palette[sidebar]"]', form).val());
      $('#preview #preview-sidebar #preview-block', form).css('border-color', $('#palette input[name="palette[sidebarborders]"]', form).val());

      // Footer wrapper background.
      $('#preview #preview-footer-wrapper', form).css('background-color', $('#palette input[name="palette[footer]"]', form).val());

      $('#preview #preview-site-name', form).css('color', $('#palette input[name="palette[titleslogan]"]', form).val());
    }
  };
})(jQuery);
