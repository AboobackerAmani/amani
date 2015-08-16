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

    if (!$('.field-name-field-header-text .field-item').length) {
    	
    	$('.field-name-field-banner-text').css('padding-top','1em');
    	
    }
    

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
	

// Set anchorlink boxes to same height

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





	
    }

  }



})(jQuery, Drupal, this, this.document);
