<?php
/**
 * @file
 * Returns the HTML for a single Drupal page.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728148
 */
?>

<div id="page">

  <header class="header" id="header" role="banner">

    <?php if ($logo): ?>
      <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" class="header__logo" id="logo"><img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" class="header__logo-image" /></a>
    <?php endif; ?>

    <?php if ($site_name || $site_slogan): ?>
      <div class="header__name-and-slogan" id="name-and-slogan">
        <?php if ($site_name): ?>
          <h1 class="header__site-name" id="site-name">
            <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" class="header__site-link" rel="home"><span><?php print $site_name; ?></span></a>
          </h1>
        <?php endif; ?>

        <?php if ($site_slogan): ?>
          <div class="header__site-slogan" id="site-slogan"><?php print $site_slogan; ?></div>
        <?php endif; ?>
      </div>
    <?php endif; ?>

    <?php if ($secondary_menu): ?>
      <nav class="header__secondary-menu" id="secondary-menu" role="navigation">
        <?php print theme('links__system_secondary_menu', array(
          'links' => $secondary_menu,
          'attributes' => array(
            'class' => array('links', 'inline', 'clearfix'),
          ),
          'heading' => array(
            'text' => $secondary_menu_heading,
            'level' => 'h2',
            'class' => array('element-invisible'),
          ),
        )); ?>
      </nav>
    <?php endif; ?>

    <?php print render($page['header']); ?>


    <div id="navigation">

      <?php if ($main_menu): ?>
        <nav id="main-menu" class="main-menu-geek-theme" role="navigation" tabindex="-1">
          <?php
          // This code snippet is hard to modify. We recommend turning off the
          // "Main menu" on your sub-theme's settings form, deleting this PHP
          // code block, and, instead, using the "Menu block" module.
          // @see https://drupal.org/project/menu_block
          print theme('links__system_main_menu', array(
            'links' => $main_menu,
            'attributes' => array(
              'class' => array('links', 'inline', 'clearfix'),
            ),
            'heading' => array(
              'text' => t('Main menu'),
              'level' => 'h2',
              'class' => array('element-invisible'),
            ),
          )); ?>
        </nav>
      <?php endif; ?>

      <?php print render($page['navigation']); ?>

    </div>

    <?php
      // Render the sidebars to see if there's anything in them.
      $sidebar_first  = render($page['sidebar_first']);
      $sidebar_second = render($page['sidebar_second']);
    ?>

    <?php if ($sidebar_first || $sidebar_second): ?>
      <aside class="sidebars">
        <?php print $sidebar_first; ?>
        <?php print $sidebar_second; ?>
      </aside>
    <?php endif; ?>

  </header>


  <div id="main">

    <div id="content" class="column" role="main">

      <?php print render($page['highlighted']); ?>
      <?php print $breadcrumb; ?>
      <a id="main-content"></a>
      <?php print render($title_prefix); ?>
      <?php if ($title): ?>
        <h1 class="page__title title" id="page-title"><?php print $title; ?></h1>
      <?php endif; ?>
      <?php print render($title_suffix); ?>
      <?php print $messages; ?>
      <?php print render($tabs); ?>
      <?php print render($page['help']); ?>
      <?php if ($action_links): ?>
        <ul class="action-links"><?php print render($action_links); ?></ul>
      <?php endif; ?>
      <?php print render($page['content']); ?>
      <?php print $feed_icons; ?>


      <!-- Beginning of slider code -->

        <?php if (drupal_is_front_page() && theme_get_setting('slideshow_display','peace_geeks')): ?>
        <?php
          $slide1_head = check_plain(theme_get_setting('slide1_head','peace_geeks'));   $slide1_desc = check_plain(theme_get_setting('slide1_desc','peace_geeks')); $slide1_url = check_plain(theme_get_setting('slide1_url','peace_geeks'));
          $slide2_head = check_plain(theme_get_setting('slide2_head','peace_geeks'));   $slide2_desc = check_plain(theme_get_setting('slide2_desc','peace_geeks')); $slide2_url = check_plain(theme_get_setting('slide2_url','peace_geeks'));
          $slide3_head = check_plain(theme_get_setting('slide3_head','peace_geeks'));   $slide3_desc = check_plain(theme_get_setting('slide3_desc','peace_geeks')); $slide3_url = check_plain(theme_get_setting('slide3_url','peace_geeks'));
        ?>
        <div class="home-slider">
          <div class="cycle-slideshow"
            data-cycle-caption-plugin='caption2'
            data-cycle-slides="li"
            data-cycle-fx='scrollHorz'
            data-cycle-speed='700'
            data-cycle-timeout='8000'
            data-cycle-center-horz=true
            data-cycle-center-vert=true
            data-cycle-prev=".prev"
            data-cycle-next=".next"
            data-cycle-caption-template="<span class=stitle>{{ptitle}}</span><br><span class=stext>{{ptext}}</span> "
            data-cycle-pause-on-hover="true" >
            <div class="cycle-caption custom"></div>
            <ul>

              <li <?php if($slide1_head): ?> data-cycle-ptitle="<?php print $slide1_head; ?>" <?php endif; ?>
                  <?php if($slide1_desc): ?> data-cycle-ptext="<?php print $slide1_desc; ?>" <?php endif; ?>
                  data-cycle-pmore="Read More" data-cycle-plink="<?php print url($slide1_url); ?>">
                <a class="frmore" href="<?php print url($slide1_url); ?>"> <img src="<?php print base_path() . drupal_get_path('theme', 'peace_geeks') . '/images/slide-image-1.jpg'; ?>"/> </a>
              </li>

              <li <?php if($slide2_head): ?> data-cycle-ptitle="<?php print $slide2_head; ?>" <?php endif; ?>
                  <?php if($slide2_desc): ?> data-cycle-ptext="<?php print $slide2_desc; ?>" <?php endif; ?>
                  data-cycle-pmore="Read More" data-cycle-plink="<?php print url($slide2_url); ?>">
                <a class="frmore" href="<?php print url($slide2_url); ?>"> <img src="<?php print base_path() . drupal_get_path('theme', 'peace_geeks') . '/images/slide-image-2.jpg'; ?>"/> </a>
              </li>

              <li <?php if($slide3_head): ?> data-cycle-ptitle="<?php print $slide3_head; ?>" <?php endif; ?>
                  <?php if($slide3_desc): ?> data-cycle-ptext="<?php print $slide3_desc; ?>" <?php endif; ?>
                  data-cycle-pmore="Read More" data-cycle-plink="<?php print url($slide3_url); ?>">
                <a class="frmore" href="<?php print url($slide3_url); ?>"> <img src="<?php print base_path() . drupal_get_path('theme', 'peace_geeks') . '/images/slide-image-3.jpg'; ?>"/> </a>
              </li>

            </ul>

            <div class="prev"></div>
            <div class="next"></div>

          </div>
        </div>
        <?php else: ?>
          <div class="headboz"></div>
        <?php endif; ?>

      <!-- End of slideshow code. -->


    </div>

  </div>

  <?php print render($page['footer']); ?>

</div>

<?php print render($page['bottom']); ?>
