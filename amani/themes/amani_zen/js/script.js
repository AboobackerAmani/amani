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
    $('.page-resources .view-content').masonry({
      itemSelector: '.views-row'
    });

  }
};

Drupal.behaviors.toggleMapFilters = {
  attach: function(context, settings) {
	  if($('body').hasClass('section-mapping-conflict-violence-in-south-sudan')){//Exclude othr pages but the map page
		  var breakpoint = 770;
		  var filterIds =
						['block-incident-map-field-incident-report-type',
						'block-incident-map-field-incident-severity',
						'block-incident-map-field-map-filter-3',
						'block-incident-map-field-map-filter-4'
						];
		  var filters = $.map( filterIds, function(i) { return document.getElementById(i) } );
		  var filtersObj = $(filters);
		  var initialWidth = $(window).width();
		  var toggleMapFilters = function(initialWidth){
			  var filterHandle = $('#filter');	
				//inject a button
				if(filterHandle.length === 0){
					//initially hidden
					filtersObj.hide();
					$('.primary-nav-wrapper').append('<div id="filter" class="header__region region filter-header"><h2>Show Filter</h2></div>');					
					$('#filter').click(

						function(){
							var text = $(this).find('h2');
							if(text.text() == 'Show Filter' ){
								text.text('Hide Filter' );
							}else if (text.text() == 'Hide Filter' ){
								text.text('Show Filter' );
							}
							$('#filter').toggleClass('expanded');
							filtersObj.fadeToggle(function(){
								//this fires 4 times in a row as filterObj is a jquery array
							});
					});
				}			  
		  };
		  $(window).smartresize(toggleMapFilters);
		  new toggleMapFilters(initialWidth);//initilizes 
	  }

	  

  }
};

Drupal.behaviors.toggleTeamFilters = {
  attach: function(context, settings) {
	  
	  if($('body').hasClass('section-team')){//Exclude othr pages but the team page
		  var breakpoint = 761;
		  var filterObjParent = $('#main').find('.view-team');
		  var filterObj = filterObjParent.find('.view-filters');
		  var initialWidth = $(window).width();
		  var toggleMapFilters = function(initialWidth){
			  var initialLoad, windowWidth, filterHandle = $('#filter');	
			  if(jQuery.type(initialWidth) === 'number'){
				windowWidth = initialWidth;
				initialLoad = true
			  }else {
				windowWidth = $(window).width();
				initialLoad = false;
			  }
			  switch(true){
			  case (windowWidth < breakpoint ):
				  //inject a button
				  if(filterHandle.length === 0){
				  filterObjParent.prepend('<h3 id="filter" class="mobile-team-filter "><a>Filters</a></h3>')
				  $('#filter').click(function(){
				  	filterObj.fadeToggle("slow", "linear" ,function(){
						$('#filter').toggleClass( "expanded" );
				  	});
				  });
				  if(initialLoad){
					  filterObj.hide();
				  }
				  }else{
				  	 filterHandle.show();
				  }
				  break;
			  
			  case (windowWidth >= breakpoint ):

				  	filterHandle.hide();					 
  					filterObj.show();			
				  
				  break;
			  }
		  
		  };
		  $(window).smartresize(toggleMapFilters);
		  new toggleMapFilters(initialWidth);//initilizes 
	  }

	  

  }
};

})(jQuery, Drupal, this, this.document);


(function($,sr){

  // debouncing function from John Hann
  // http://unscriptable.com/index.php/2009/03/20/debouncing-javascript-methods/
  var debounce = function (func, threshold, execAsap) {
      var timeout;

      return function debounced () {
          var obj = this, args = arguments;
          function delayed () {
              if (!execAsap)
                  func.apply(obj, args);
              timeout = null;
          };

          if (timeout)
              clearTimeout(timeout);
          else if (execAsap)
              func.apply(obj, args);

          timeout = setTimeout(delayed, threshold || 100);
      };
  }
  // smartresize 
  jQuery.fn[sr] = function(fn){  return fn ? this.bind('resize', debounce(fn)) : this.trigger(sr); };

})(jQuery,'smartresize');

/**
*
* Jquery footer unordered list in 3 columns
*/

(function ($) {

  // Drupal.behaviors.footerThreeColumns = {
  //     attach: function(context, settings) {
  //       $('footer .menu').once('footerThreeColumns', function() {
  //         var initialContainer = $('footer .menu'),
  //         columnItems = $('footer .menu li'),
  //         columns = null,
  //         column = 1; // account for initial column
  //         function updateColumns(){
  //           column = 0;
  //           columnItems.each(function(idx, el){
  //             if (idx !== 0 && idx > (columnItems.length / columns.length) + (column * idx)){
  //                 column += 1;
  //                 console.log(el);
  //             }
  //             $(columns.get(column)).append(el);
  //           });
  //         }
  //         function setupColumns(){
  //           columnItems.detach();
  //           while (column++ <= 3){
  //             initialContainer.clone().insertBefore(initialContainer);
  //             console.log(initialContainer);
  //             column++;
  //           }
  //           columns = $('footer .menu');
  //         }
  // 
  //         $(function(){
  //           setupColumns();
  //           updateColumns();
  //         });
  // 
  //       });
  //     }
  //   }

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
  
  //Social media icons list on nav
  Drupal.behaviors.mediaNav = {
    attach: function(context, settings) {

      var sm = $('#block-menu-menu-social-media');
      var count = $('#block-menu-menu-social-media ul.menu>li').length;
      
      if (count>4) {
        sm.append('<div id="arrowicon"></div>');
      }
    
    //arrow toggle for social icons
      $("#arrowicon").click(function() {
        sm > $('ul.menu').toggleClass('expand');
        $('#arrowicon').toggleClass('arrow-up');
      });
    }
  };

})(jQuery);


// Resource fliter toggle
(function ($) {
  Drupal.behaviors.filter = {
    attach: function(context, settings) {
      
      var ft = $('#block-views-exp-resources-page');
      
      $(document).ready(function() {
        checkTablet();                
      });
      
      $(window).resize(function() {
        checkTablet();        
      });
      
      function checkTablet() {
        if($(window).width() < 980 ) {
          // if the nav menu and nav button are both visible,
          // then the responsive nav transitioned from open to non-responsive, then back again.
          // re-hide the nav menu and remove the hidden class
          $(ft).addClass('add-fliter-title');
          
          $(ft).click(function () {
            $(".views-exposed-form").toggleClass("show");
          });
        }
        if($(window).width() > 979 && ft.hasClass('add-fliter-title')) {
          // if the navigation menu and nav button are both hidden,
          // then the responsive nav is closed and the window resized larger than 979.
          // just display the nav menu which will auto-hide at < 980 width.
          $(ft).removeAttr('class');
        }        
        
      }
      
      
    }
  }

}(jQuery))
