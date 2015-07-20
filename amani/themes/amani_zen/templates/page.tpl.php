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

		<a href="#" id="mobile-toggle" title="Menu">Menu</a>

  </header>

  <div id="main">

    <div id="navigation">

      <?php if ($main_menu): ?>
        <nav id="main-menu" role="navigation" tabindex="-1">
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


    <!-- Slider begins -->

      <?php if (drupal_is_front_page()): ?>
      <?php if (theme_get_setting('slideshow_display','amani_zen')): ?>
      <?php
        $slide1_head = check_plain(theme_get_setting('slide1_head','amani_zen'));
        $slide1_desc = check_plain(theme_get_setting('slide1_desc','amani_zen'));
        $slide1_url = check_plain(theme_get_setting('slide1_url','amani_zen'));

        $slide2_head = check_plain(theme_get_setting('slide2_head','amani_zen'));
        $slide2_desc = check_plain(theme_get_setting('slide2_desc','amani_zen'));
        $slide2_url = check_plain(theme_get_setting('slide2_url','amani_zen'));

        $slide3_head = check_plain(theme_get_setting('slide3_head','amani_zen'));
        $slide3_desc = check_plain(theme_get_setting('slide3_desc','amani_zen'));
        $slide3_url = check_plain(theme_get_setting('slide3_url','amani_zen'));
      ?>
      <div id="homepage-slider-wrap" class="clr flexslider-container" style="width: 100%;">
        <div id="homepage-slider" class="flexslider">
          <ul class="slides clr">
            <li class="homepage-slider-slide">
              <a href="<?php print url($slide1_url); ?>">
                <div class="homepage-slide-inner container">
                  <?php if($slide1_head || $slide1_desc) : ?>
                  <div class="homepage-slide-content">
                    <div class="homepage-slide-title"><?php print $slide1_head; ?></div>
                    <div class="clr"></div>
                    <div class="homepage-slide-caption"><?php print $slide1_desc; ?></div>
                  </div>
                  <?php endif; ?>
                </div>
                <img src="<?php print base_path() . drupal_get_path('theme', 'amani_zen') . '/images/slide-image-1.jpg'; ?>">
              </a>
            </li>
            <li class="homepage-slider-slide">
              <a href="<?php print url($slide2_url); ?>">
                <div class="homepage-slide-inner container">
                  <?php if($slide2_head || $slide2_desc) : ?>
                  <div class="homepage-slide-content">
                    <div class="homepage-slide-title"><?php print $slide2_head; ?></div>
                    <div class="clr"></div>
                    <div class="homepage-slide-caption"><?php print $slide2_desc; ?></div>
                  </div>
                  <?php endif; ?>
                </div>
                <img src="<?php print base_path() . drupal_get_path('theme', 'amani_zen') . '/images/slide-image-2.jpg'; ?>">
              </a>
            </li>
            <li class="homepage-slider-slide">
              <a href="<?php print url($slide3_url); ?>">
                <div class="homepage-slide-inner container">
                  <?php if($slide3_head || $slide3_desc) : ?>
                  <div class="homepage-slide-content">
                    <div class="homepage-slide-title"><?php print $slide3_head; ?></div>
                    <div class="clr"></div>
                    <div class="homepage-slide-caption"><?php print $slide3_desc; ?></div>
                  </div>
                  <?php endif; ?>
                </div>
                <img src="<?php print base_path() . drupal_get_path('theme', 'amani_zen') . '/images/slide-image-3.jpg'; ?>">
              </a>
            </li>
          </ul>
        </div>
      </div>
      <?php endif; ?>
      <?php endif; ?>
    <!-- Slider ends -->


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

  </div>

  <?php print render($page['footer']); ?>

</div>

<?php print render($page['bottom']); ?>
