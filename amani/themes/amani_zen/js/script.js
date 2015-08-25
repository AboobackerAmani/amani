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
Drupal.behaviors.my_custom_behavior = {
  attach: function(context, settings) {

    // Place your code here.

  }
};

})(jQuery, Drupal, this, this.document);


/**
*
* Jquery footer unordered list in 3 columns
*/

(function ($) {

  Drupal.behaviors.footerThreeColumns = {
    attach: function(context, settings) {
      $('footer .menu').once('footerThreeColumns', function() {
        var initialContainer = $('footer .menu'),
        columnItems = $('footer .menu li'),
        columns = null,
        column = 1; // account for initial column
        function updateColumns(){
          column = 0;
          columnItems.each(function(idx, el){
            if (idx !== 0 && idx > (columnItems.length / columns.length) + (column * idx)){
                column += 1;
                console.log(el);
            }
            $(columns.get(column)).append(el);
          });
        }
        function setupColumns(){
          columnItems.detach();
          while (column++ <= 3){
            initialContainer.clone().insertBefore(initialContainer);
            console.log(initialContainer);
            column++;
          }
          columns = $('footer .menu');
        }

        $(function(){
          setupColumns();
          updateColumns();
        });

      });
    }
  }

  Drupal.behaviors.headerSearch = {
    attach: function(context, settings) {
      // when the search input is clicked, set its inline width so that it
      // does not shrink again unless the page is reloaded
      $('.block-search .form-text').click(function() {
        $(this).closest('.block-search').css({'width': '136px'});
      });
    }
  }

  /**
  *
  * Slideshow resize function
  */

  Drupal.theme.prototype.slideshowResizer = function (target){
    var slideheight = 0;
    $(target + ' .views-slideshow-cycle-main-frame-row').each(function(){
      slideheight = $(this).find('.views-slideshow-cycle-main-frame-row-item').innerHeight();
      if(slideheight != 0){
        $(target + ' .views-slideshow-cycle-main-frame').css('height',slideheight+'px');
        $(target + ' .views-slideshow-cycle-main-frame-row').css('height',slideheight+'px');
        return false;
      }
    });
  };

  Drupal.behaviors.slideshowResize = {
    attach: function (context, settings) {
      $('.slideshow', context).once('processed', function () {
        Drupal.theme('slideshowResizer', '.slideshow');
      });

      $(window).resize( function() {
        Drupal.theme('slideshowResizer', '.slideshow');
      });
    }
  };
  
  //Mobile nav
  Drupal.behaviors.mobileNav = {
    attach: function(context, settings) {

      var nb = $('#mobile-toggle');
      var n = $('#block-menu-menu-amani-main-menu');
      
      $(window).resize(function(){

        if($(this).width() < 768 && n.hasClass('keep-nav-closed')) {
          // if the nav menu and nav button are both visible,
          // then the responsive nav transitioned from open to non-responsive, then back again.
          // re-hide the nav menu and remove the hidden class
          $('#block-menu-menu-amani-main-menu').hide().removeAttr('class');
        }
        if(nb.is(':hidden') && n.is(':hidden') && $(window).width() > 767) {
          // if the navigation menu and nav button are both hidden,
          // then the responsive nav is closed and the window resized larger than 767.
          // just display the nav menu which will auto-hide at <768 width.
          $('#block-menu-menu-amani-main-menu').show().addClass('keep-nav-closed');
        }
      }); 
      
      //slide toggle for mobile menu
      $("#block-menu-menu-amani-main-menu").once('mobileNav', function() {
        $("#mobile-toggle").click(function() {
          $(this).toggleClass('expand');
          $("#block-menu-menu-amani-main-menu").slideToggle('slow');
        });
      })
    }
  };

})(jQuery);









