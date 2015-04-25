<?php
/**
 * Created by PhpStorm.
 * User: kshihabi
 * Date: 2/18/15
 * Time: 11:16 PM
 */

//this block is not displayed anywhere. It is embedded in block--block--3.tpl.php
//this block is for the top right menu in the website

global $language;
global $site_slogan;
global $base_url;
if($language->language=='en') {
    $link=$base_url.'/ar';
    $text=t("Arabic");
}else {
    $link=$base_url.'/en';
    $text=t("English");
}

$block = module_invoke('search', 'block_view', 'search');
$search_block='<div class="sub-head">' . render($block). '</div>';

$block = module_invoke('menu', 'block_view', 'menu-social-media');
$social_block='<div class="sub-head">' . render($block). '</div>';

$block = module_invoke('locale', 'block_view', 'language');
$language_block='<div class="sub-head">' . render($block). '</div>';

?>
<div class="header_links">
    <div class="block-wrappers">
        <div class="site--slogan"></div>
        <div class="top-icons">
            <div class="link search_link"><a class="search link-icon" href="#">search</a><?php print $search_block;?></div>
            <div class="social-block"><?php print $social_block;?></div>
            <div class="lang-block"><?php print $language_block;?></div>
        </div>
    </div>

</div>