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

})(jQuery);

