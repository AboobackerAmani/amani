/**
 * @file
 * A JavaScript file for the theme.
 *
 * In order for this JavaScript to be loaded on pages, see the instructions in
 * the README.txt next to this file.
 */

// JavaScript should be made compatible with libraries other than jQuery by
// wrapping it with an "anonymous closure". See:
// - https://drupal.org/node/1446420
// - http://www.adequatelygood.com/2010/3/JavaScript-Module-Pattern-In-Depth
(function ($, Drupal, window, document, undefined) {

// To understand behaviors, see https://drupal.org/node/756722#behaviors
  
  //Mobile nav
  Drupal.behaviors.mobileNav = {
    attach: function(context, settings) {

      var nb = $('#mobile-toggle');
      var n = $('#block-system-main-menu');

        $(window).on('resize', function(){
    
        if($(this).width() < 768 && n.hasClass('keep-nav-closed')) {
          // if the nav menu and nav button are both visible,
          // then the responsive nav transitioned from open to non-responsive, then back again.
          // re-hide the nav menu and remove the hidden class
          $('#block-system-main-menu').hide().removeAttr('class');
        }
        if(nb.is(':hidden') && n.is(':hidden') && $(window).width() > 767) {
          // if the navigation menu and nav button are both hidden,
          // then the responsive nav is closed and the window resized larger than 767.
          // just display the nav menu which will auto-hide at <768 width.
          $('#block-system-main-menu').show().addClass('keep-nav-closed');
        }
      }); 

        //slide toggle for mobile menu
      $("#block-system-main-menu").once('mobileNav', function() {
        $("#mobile-toggle").on('click', function() {
          $(this).toggleClass('expand');
          $("#block-system-main-menu").slideToggle('slow');
        });
      })
    }
  }
  

})(jQuery, Drupal, this, this.document);
