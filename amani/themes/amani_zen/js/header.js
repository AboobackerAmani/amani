/**
 * @file
 * A JavaScript file to shrink the theme header.
 *
 * In order for this JavaScript to be loaded on pages, see the instructions in
 * the README.txt next to this file.
 */

$(function(){
  $('#header').data('size','big');
});

$(window).scroll(function(){
    if($(document).scrollTop() > 0) {
        if($('#header').data('size') == 'big') {
            $('#header').data('size','small');
            $('#header').stop().animate({
                height:'40px'
            },600);
        }
    }
    else
    {
        if($('#header').data('size') == 'small')
        {
            $('#header').data('size','big');
            $('#header').stop().animate({
                height:'100px'
            },600);
        }
    }
});
