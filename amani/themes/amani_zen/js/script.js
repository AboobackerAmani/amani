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


	

Drupal.behaviors.banner_adjustments = {
  attach: function(context, settings) {

    if ( (!$('.field-name-field-header-text .field-item').length) && (!$('.field-name-field-banner-text .field-item').length)) {
    	
    	//$('.field-name-field-banner-text').css('padding-top','1em');
    	$('.field-name-field-banner-image').css('margin-top','0');
    	
    }
    
    
  }
};





	
	
Drupal.behaviors.misc_adjustments = {
  attach: function(context, settings) {
  	
  	var thewidth = $(window).width();
		
// Mobile menu toggle 

	$('#mobile-toggle').click(function() {
	
			$('#block-system-main-menu').slideToggle("slow");
	
		});	

	

	$(window).on('resize', function() {
		
		var win = $(this);
		
			if (win.width() >= 768) {
			
				$('body.page-team .views-field-field-team-image').hover(
					function() {
						$(this).next().next().find('span').css('opacity','1');
					}, function() {
						$(this).next().next().find('span').css('opacity','0')
					}
		
				);
				
				$('#block-system-main-menu').css('display','block');
				
			}
			
			if (win.width() < 768) {
			
			
				$('body.page-team .views-field-field-team-image').hover(
					function() {
						$(this).next().next().find('span').css('opacity','1');
					}, function() {
						$(this).next().next().find('span').css('opacity','1')
					}
		
				);
				
		
				$('#block-system-main-menu').css('display','none');
			
			}
    
    });
    
    	
    	$('.views-exposed-form input[type="radio"]:checked').parent().css('background','#59C2ED');
    
    
    

  }
};


Drupal.behaviors.paragraphs_adjustments = {
  attach: function(context, settings) {

// Bold the first word for text with class action-link

	$('a.action-link').each(function() {
		var word = $(this).html();
		var index = word.indexOf(' ');
		if(index == -1) {
			index = word.length;
		}
		$(this).html('<span class="first-word">' + word.substring(0, index) + '</span>' + word.substring(index, word.length));
	});
	

// Code controlling the scroll to top button

	$('#top-scroll').click(function() {
		
		$('html, body').animate({
			scrollTop:0
		},'slow');
		
	});
	

// Set anchor links for anchor text boxes

	$('.field-name-field-anchor-to-link-to').each(function() {
	
		var theanchor = $(this).find('.field-item').html();
		$(this).prev().find('a').attr('href', '#' + theanchor);
		$(this).prev().prev().find('img').wrap('<a class="anchorlink" href="#' + theanchor + '"></a>');
		
	});
	

// Rewrite all hashtag links to go to search results page with tag as search keyword

	$('a[href^="/tags/"]').each(function() {
	
		var thetag = $(this).text();
		$(this).attr('href', '/search/node/' + thetag);
		
	});

	
// Set proper alignment for callout block on Structure pages if it's last callout block on the page

	$('.field-name-field-paragraphs > .field-items > .field-item').each(function() {
	
		$(this).css({
			'margin-top':'2em',
			'margin-bottom':'2em',
			'display':'block',
			'float':'left'
		});
		
		var isdivider = $(this).find('div.paragraphs-item-divider-line').size();
		
		if (isdivider != 0) {
			$(this).css({
				'float':'none',
				'margin-top':'0',
				'margin-bottom':'0'
			});
		}
		
		var isanchorlink = $(this).find('div.paragraphs-item-light-grey-text-box-with-link-to').size();
		
		if (isanchorlink != 0) {
			$(this).css({
				'float':'none',
				'margin-top':'0',
				'margin-bottom':'0'
			});
		}
		
		var isnarrowgreybox = $(this).find('div.paragraphs-item-light-grey-text-box-narrower').size();
		
		if (isnarrowgreybox != 0) {
			$(this).css({
				'float':'none',
				'margin-top':'0',
				'margin-bottom':'0'
			});
		}
		
		var islightgreytextbox = $(this).find('div.paragraphs-item-light-grey-text-box').size();
		
		if (islightgreytextbox != 0) {
			$(this).css({
				'float':'none',
				'margin-top':'0',
				'margin-bottom':'0'
			});
		}
	
		var iscallout = $(this).find('div.paragraphs-item-callout-box-full-width-grey').size();
		var islastblock = $(this).next().size();
		
		if ((iscallout != 0) && (islastblock == 0)) {
			$('#main').css('padding-bottom','0');
			$(this).find('.paragraphs-item-callout-box-full-width-grey').css('margin-bottom','-71px');
			$(this).find('.paragraphs-item-callout-box-full-width-grey').css('padding-bottom','8em');
		}
	});
	
// Change background colour of full-width callout box based on selected colour 

	$('div.paragraphs-item-callout-box-full-width-grey').each(function() {
		
		var backcolour = $(this).find('.field-name-field-background-colour .field-item').html();
		
		if (backcolour == 'PG Blue') {
			$(this).css('background','#59C2ED');
			$(this).addClass('bluebackground');
			$(this).css('color','white');
		}
		
		if (backcolour == 'Soft Grey') {
			$(this).css('background','#E6E6E6');
		}
		
	
	});	
	

// Add body class if present 

	if ($('.paragraphs-item-add-body-class').length) {
	
		var bodyclass = $('.paragraphs-item-add-body-class .field-item').html();
		$('body').addClass(bodyclass);
		$('.paragraphs-item-add-body-class').parent().hide();
	}

// Add link box classes if present 

	$('.paragraphs-item-light-grey-text-box-with-link-to').each(function() {
	
		var anchorlinkbox = $(this).find('.field-name-field-class-for-this-box .field-item');
	
			var boxclass = anchorlinkbox.html();
			anchorlinkbox.parent().parent().parent().parent().parent().addClass(boxclass).addClass('anchor-link-to-box').css('float','left');;
			anchorlinkbox.hide();
	});
	
	var narrowgreybox = $('.paragraphs-item-light-grey-text-box-narrower .field-name-field-class-for-this-box .field-item');
	
	if (narrowgreybox.length) {
	
		var narrowboxclass = narrowgreybox.html();
		narrowgreybox.parent().parent().parent().parent().addClass(narrowboxclass);
		narrowgreybox.hide();
	}
	
		
	$('.paragraphs-item-link-block-grey').each(function() {
		var linkblockbox = $(this).find('.field-name-field-class-for-this-box .field-item');
		var linkblockclass = linkblockbox.html();
		$(this).parent().addClass(linkblockclass);
		linkblockbox.hide();
	
	});
	
	$('.paragraphs-item-raw-block').each(function() {
		var rawblockbox = $(this).find('.field-name-field-class-for-this-box .field-item');
		var rawblockclass = rawblockbox.html();
		$(this).parent().addClass(rawblockclass);
		rawblockbox.hide();
	
	});
	
	$('.paragraphs-item-simple-text-with-right-side-imag').each(function() {
		var imgblockbox = $(this).find('.field-name-field-class-for-this-box .field-item');
		var imgblockclass = imgblockbox.html();
		$(this).parent().addClass(imgblockclass);
		imgblockbox.hide();
	
	});
	
	$('.paragraphs-item-paragraph-text-with-header-text').each(function() {
		var parablockbox = $(this).find('.field-name-field-class-for-this-box .field-item');
		var parablockclass = parablockbox.html();
		$(this).parent().addClass(parablockclass);
		parablockbox.hide();
	
	});
	
	

// Code to control collapse and expansion of blocks on current openings page

	$('.view-display-id-current_openings_page .views-field-body').each(function() {
	
		$(this).hide();
	});
	
	/*$('.view-display-id-current_openings_page .views-field-field-opportunity-tags').each(function() {
	
		$(this).hide();
	});*/
	

	
	$('.view-display-id-current_openings_page .views-field-title').click(function() {
		
		$(this).parent().find('.views-field-body').toggle('fast');
		//$(this).parent().find('.views-field-field-opportunity-tags').toggle('fast');
		var labelcheck = $(this).find('.views-label').html();
		if (labelcheck == '+') {
				$(this).find('.views-label').html('-');
				$(this).next().next().before('<a class="current-apply-button" href="/volunteer-application">Apply Now</a>');
			}
			else if (labelcheck == '-') {
				$(this).find('.views-label').html('+');
				$(this).parent().find('.current-apply-button').hide();
			}
		
	
	});



// Code to control collapse and expansion of filters on Projects page

	$('body.projectsmainpage .views-exposed-form .views-exposed-widgets').hide(); 
	

	$('body.projectsmainpage .views-exposed-form .views-exposed-widgets').before('<div class="expandhide">Expand</div>');
	
	$('body.projectsmainpage .views-exposed-form .expandhide').click(function() {
		
		$('body.projectsmainpage .views-exposed-form .views-exposed-widgets').toggle('fast');
		//$(this).parent().find('.views-field-field-opportunity-tags').toggle('fast');
		var expandcheck = $('body.projectsmainpage .views-exposed-form .expandhide').html();
		if (expandcheck == 'Expand') {
				$('body.projectsmainpage .views-exposed-form .expandhide').html('Hide');
			}
			else if (expandcheck == 'Hide') {
				$('body.projectsmainpage .views-exposed-form .expandhide').html('Expand');
			}
		
	
	});
	
	

// Change current openings block links to lead to currentopenings page 

	/*$('.view-display-id-current_openings_block ol li .views-field-title a').each(function() {
		
		$(this).attr('href','/currentopenings');
	
	});*/
	
	

// Code to control collapse and expansion of blocks on FAQ page

	$('.view-display-id-faq_page .views-field-body').each(function() {
	
		$(this).hide();
	});
	


	
	$('.view-display-id-faq_page .views-field-title').click(function() {
		
		$(this).parent().find('.views-field-body').toggle('fast');
		//$(this).parent().find('.views-field-field-opportunity-tags').toggle('fast');
		var labelcheck = $(this).find('.views-label').html();
		if (labelcheck == '+') {
				$(this).find('.views-label').html('-');
			}
			else if (labelcheck == '-') {
				$(this).find('.views-label').html('+');
			}
		
	
	});
	

// Code to control collapse and expansion of blocks on Other Ways to Give page

	$('body.otherwaystogive .other-ways-item .field-name-field-paragraph-text').each(function() {
	
		$(this).hide();
	});
	


	
	$('body.otherwaystogive .other-ways-item .field-name-field-header-text').click(function() {
		
		$(this).next().toggle('fast');
		
		
	
	});
	

// Set anchorlink and other boxes to same height

	  if ($('body.node-type-structure').length) {
  
		var divHeights = $('a.anchorlink').map(function() {
	
			return $(this).height();
		
		}).get();
	
		var maxHeight = Math.max.apply(null, divHeights);
	
		$('a.anchorlink').height(maxHeight);
		
		$('a.action-link').height(maxHeight + 15).css({
		
			'margin-top':'-38px',
			'margin-bottom':'0'
		}).addClass('shorterlinkbox').find('span').removeClass('first-word');
		
	}
	
// Set country region boxes to same height

	  if ($('body.node-type-structure').length) {
  
		var divBHeights = $('.view-display-id-region_country_name_blocks .item-list').map(function() {
			
			heght = $(this).height();
			return $(this).height();
		
		}).get();
	
		var maxBHeight = Math.max.apply(null, divBHeights);
	
		$('.view-display-id-region_country_name_blocks .item-list').height(maxBHeight);
		
		}
		
		// Sponsor logo boxes
		
		/*var divSponsorHeights = $('.view-sponsors.view-display-id-block_1 .views-column').map(function() {
	
			return $(this).height();
		
		}).get();
	
		var maxSponsorHeight = Math.max.apply(null, divSponsorHeights);
	
		$('.view-sponsors.view-display-id-block_1 .views-column').height(maxSponsorHeight);*/
		
			
	  
	  

// Set anchor names on anchor text boxes 

	if ($('body.node-type-structure').length) {
	
		$('.paragraphs-item-paragraph-text-with-anchor').each(function() {
		
			var anchorname = $(this).find('.field-name-field-anchor-name .field-item').html();
			$(this).attr('id', anchorname);
		});
	
	}
	
	
// Smooth scroll for anchor links 

	$('a.anchorlink').click(function(event) {
	
		event.preventDefault();
		 $('html,body').animate( { scrollTop:$(this.hash).offset().top } , 1000);
	
	});
	
	
// Dynamically resize banner images when browser width is greater than 1200px

	var $window = $(window);
    

    /*$function checkWidth() {
        var windowsize = $window.width();
        if (windowsize > 1200) {
           ('.field-name-field-banner-image img').css({
           		'max-width':windowsize + (windowsize/4),
           		'width':windowsize + (windowsize/4),
           		'height':'auto',
           		'margin-left':'-25%'
           	
           });
           var imgsrc = $('.field-name-field-banner-image img').attr('src');
           $('.field-name-field-banner-image').css({
           		'background':'url(' + imgsrc + ')',
           		'background-size':'cover',
           		'background-repeat':'no-repeat'
           	});
         
        }
    }
    // Execute on load
    checkWidth();
    // Bind event listener
    $(window).resize(checkWidth);*/



// Callout box link add 

	if ($('.paragraphs-item-special-event-callout-box').length) {
		
		var calloutlink = $('.paragraphs-item-special-event-callout-box .field-name-field-callout-link .field-item').html();
		$('.paragraphs-item-special-event-callout-box').wrap('<a href="' + calloutlink + '"></a>');
		
		var calloutactive = $('.field-name-field-callout-active- .field-item').html();
		if (calloutactive != "Yes") {
			$('.paragraphs-item-special-event-callout-box').parent().hide();
			$('body.front #content').css('margin-top','-20px');
		}
	
	}
	

// Front page area of focus link anchor change

	var frontareaanchor = $('body.front .view-display-id-front_areas_of_focus .views-field-field-anchor-to-link-to .field-content').html();
	
	var frontareanewlink = location.protocol + '//' + location.host + '/areas-of-focus#' + frontareaanchor;
	
	$('body.front .view-display-id-front_areas_of_focus .views-field-title a').attr('href', frontareanewlink);
	
	

// Team page adjustments, hover effects, etc


	
// Faux quicktabs functionality for Values block	
	
	$('#value-a').click(function() {
		$('#value-a-content').addClass('value-content-active').css('display','block');
		$(this).addClass('value-active');
		
		$('#values-line span').each(function() {
		
			if (!($(this).is('#value-a')) && $(this).hasClass('value-active')) {
			
				$(this).removeClass('value-active');
			}
		});
		
		$('.value-content-block').each(function() {
		
			if (!($(this).is('#value-a-content')) && $(this).hasClass('value-content-active')) {
			
				$(this).removeClass('value-content-active');
				$(this).css('display','none');
			}
		});
		
	});
	
	$('#value-b').click(function() {
		$('#value-b-content').addClass('value-content-active').css('display','block');
		$(this).addClass('value-active');
		
		$('#values-line span').each(function() {
		
			if (!($(this).is('#value-b')) && $(this).hasClass('value-active')) {
			
				$(this).removeClass('value-active');
			}
		});
		
		$('.value-content-block').each(function() {
		
			if (!($(this).is('#value-b-content')) && $(this).hasClass('value-content-active')) {
			
				$(this).removeClass('value-content-active');
				$(this).css('display','none');
			}
		});
		
	});
	
	$('#value-c').click(function() {
		$('#value-c-content').addClass('value-content-active').css('display','block');
		$(this).addClass('value-active');
		
		$('#values-line span').each(function() {
		
			if (!($(this).is('#value-c')) && $(this).hasClass('value-active')) {
			
				$(this).removeClass('value-active');
			}
		});
		
		$('.value-content-block').each(function() {
		
			if (!($(this).is('#value-c-content')) && $(this).hasClass('value-content-active')) {
			
				$(this).removeClass('value-content-active');
				$(this).css('display','none');
			}
		});
		
	});
		

	$('#value-d').click(function() {
		$('#value-d-content').addClass('value-content-active').css('display','block');
		$(this).addClass('value-active');
		
		$('#values-line span').each(function() {
		
			if (!($(this).is('#value-d')) && $(this).hasClass('value-active')) {
			
				$(this).removeClass('value-active');
			}
		});
		
		$('.value-content-block').each(function() {
		
			if (!($(this).is('#value-d-content')) && $(this).hasClass('value-content-active')) {
			
				$(this).removeClass('value-content-active');
				$(this).css('display','none');
			}
		});
		
	});

	$('#value-e').click(function() {
		$('#value-e-content').addClass('value-content-active').css('display','block');
		$(this).addClass('value-active');
		
		$('#values-line span').each(function() {
		
			if (!($(this).is('#value-e')) && $(this).hasClass('value-active')) {
			
				$(this).removeClass('value-active');
			}
		});
		
		$('.value-content-block').each(function() {
		
			if (!($(this).is('#value-e-content')) && $(this).hasClass('value-content-active')) {
			
				$(this).removeClass('value-content-active');
				$(this).css('display','none');
			}
		});
		
	});

	$('#value-f').click(function() {
		$('#value-f-content').addClass('value-content-active').css('display','block');
		$(this).addClass('value-active');
		
		$('#values-line span').each(function() {
		
			if (!($(this).is('#value-f')) && $(this).hasClass('value-active')) {
			
				$(this).removeClass('value-active');
			}
		});
		
		$('.value-content-block').each(function() {
		
			if (!($(this).is('#value-f-content')) && $(this).hasClass('value-content-active')) {
			
				$(this).removeClass('value-content-active');
				$(this).css('display','none');
			}
		});
		
	});



// Put webform labels into input fields as placeholder text 

	$('body.becomesponsor .block-webform .form-item label').each(function() {
	
		var thelabeltext = $(this).text();
		
		if ( $(this).next().is('input') ) {
			$(this).next().attr('placeholder',thelabeltext);
		}
		
		if ( $(this).next().is('div') ) {
			$(this).next().find('textarea').attr('placeholder',thelabeltext);
		}
		
	});
	
	// Mailchimp version
	
	
	$('#block-mailchimp-signup-newsletter-signup-form .form-item label').each(function() {
	
		var maillabeltext = $(this).text();
		
		if ( $(this).next().is('input') ) {
			$(this).next().attr('placeholder',maillabeltext);
		}
		
		if ( $(this).next().is('div') ) {
			$(this).next().find('textarea').attr('placeholder',maillabeltext);
		}
		
	});
	
	
// Copy top social icons to footer

	$('#block-menu-menu-social-media').once().clone().insertAfter('#footer ul.menu');
	



// Show/hide submenu items on hover 

/*	$('#block-system-main-menu > ul.menu > li:not(.active-trail)').hover(
	
		function() {
	
			$(this).find('ul.menu').show();

		},
		
		function() {
		
			$(this).find('ul.menu').hide();
		
		});
	

// Put form labels inline into input boxes

/* $("#partner-application-form :input").each(function(index, elem) {
    var eId = $(elem).attr("id");
    var label = null;
    if (eId && (label = $(elem).parents("form").find("label[for="+eId+"]")).length == 1) {
        $(elem).attr("placeholder", $(label).html());
        $(label).hide();
    }
 });*/

	
    }

  }



})(jQuery, Drupal, this, this.document);
