/**
 * @file
 * A JavaScript file for the theme.
 *
 * In order for this JavaScript to be loaded on pages, see the instructions in
 * the README.txt next to this file.
 */
// JavaScript should be made compatible with libraries other than jQuery by
// wrapping it with an "anonymous closure". See:
// - http://drupal.org/node/1446420
// - http://www.adequatelygood.com/2010/3/JavaScript-Module-Pattern-In-Depth
(function ($, Drupal, window, document, undefined) {

Drupal.behaviors.heritageTheme = {
  attach: function (context, settings) {

    // a simple window preloader.
    // wait until the entire site has been loaded.
    $(window).load(function() {
      // Load functions
    });

    $(document).scroll(function() {
      // scroll functions.
    });

    // All other functions upon load.
    // $('.field-name-field-screenshots .field-items:not(.processed)').addClass('processed').bxSlider({
    //   buildPager: function(slideIndex){
    //     switch(slideIndex){
    //       case 0:
    //         return '<img src="http://localhost/riskiq/core/sites/default/files/esl101_0.png">';
    //       case 1:
    //         return '<img src="/images/thumbs/houses.jpg">';
    //       case 2:
    //         return '<img src="/images/thumbs/hill_fence.jpg">';
    //     }
    //   }
    // });

    $('.views-widget #edit-keys').val('Search...');
    $('.views-widget #edit-keys').focus(function() {
      if($(this).val() == 'Search...') {
        $(this).val('').addClass('focus');
      } else if($(this).val() == '') {
        $(this).val('Search...').removeClass('focus');
      }
    });

    $('.views-widget #edit-keys').focusout(function() {
      if($(this).val() == '') {
        $(this).val('Search...').removeClass('focus');
      } else {
        $(this).addClass('focus');
      }
    });

  } // close "attach".
} // close "behaviors".

})(jQuery, Drupal, this, this.document);