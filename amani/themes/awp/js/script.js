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

      //Rewrite slogna into header region
      $('.header__region .header_links .site--slogan').append($('.header__name-and-slogan'));

      $('.header__region .header_links .search_link .link-icon').click(function(){
          $('.header__region .header_links .search_link #search-block-form').show();
      });
      $('.header__region .header_links .search_link #search-block-form .form-text').focusout(function() {
          $('.header__region .header_links .search_link #search-block-form').hide();
      });
   /* if (($( document ).width()-20)>781)
      {
          //$('.section-resources .sidebars .region-sidebar-second').height($('.section-resources .view-resources-categories').height());
          console.log("width=" + $( document ).width());
      }
      else{
        ($('#header .lang-block')).appendTo($('#header'));
        console.log("width=" + $( document ).width());
    }*/

      $('#header .lang-block').appendTo($('#header'));


      var ourLabel = $('#views-exposed-form-resource-inner-page .views-widget-filter-keys label').text();
      $('#views-exposed-form-resource-inner-page .views-widget-filter-keys label').hide();
      $('#views-exposed-form-resource-inner-page .views-widget-filter-keys .form-text').attr("placeholder", $.trim(ourLabel));

      $('[dir="ltr"] #block-menu-menu-awp-footer-menu .menu').append('<li class="menu__item is-leaf last leaf top-menu"><a href="#"" title="Top" class="menu__link top-link">Top</a></li>');
      $('[dir="rtl"] #block-menu-menu-awp-footer-menu .menu').append('<li class="menu__item is-leaf last leaf top-menu"><a href="#"" title="Top" class="menu__link top-link">الأعلى</a></li>');


  }
};


})(jQuery, Drupal, this, this.document);
