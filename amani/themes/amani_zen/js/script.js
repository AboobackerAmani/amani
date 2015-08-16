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

	$('a.action-link').each(function() {
		var word = $(this).html();
		var index = word.indexOf(' ');
		if(index == -1) {
			index = word.length;
		}
		$(this).html('<span class="first-word">' + word.substring(0, index) + '</span>' + word.substring(index, word.length));
	});
	
	$('#top-scroll').click(function() {
		
		$('html, body').animate({
			scrollTop:0
		},'slow');
		
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
	
		var iscallout = $(this).find('div.paragraphs-item-callout-box-full-width-grey').size();
		var islastblock = $(this).next().size();
		
		if ((iscallout != 0) && (islastblock == 0)) {
			$('#main').css('padding-bottom','0');
			$(this).find('.paragraphs-item-callout-box-full-width-grey').css('margin-bottom','-71px');
			$(this).find('.paragraphs-item-callout-box-full-width-grey').css('padding-bottom','8em');
		}
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
