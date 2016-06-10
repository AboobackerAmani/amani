<?php
/**
 * @file
 * Returns the HTML `<header>` for a single Drupal page.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728148
 */
?>

<?php
  /// MARK: -- 'Global variables' to be used throughout this page
  $search_form = NULL;
?>

<header class="header" id="header" role="banner">

  <div class="header-wrapper">

  <div class="header-logo clearfix">
    <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" class="header__logo" id="logo">
      <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" class="header__logo-image" />
    </a>
  </div>

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

  </div>

  <div class="primary-nav-wrapper">
    <?php
      if (variable_get('site_searchbar_position') == 1) { // search is to be rendered in the footer
        $search_form = $page['header']['search_form']; // save the actual form to be used later in the 'footer'
        unset($page['header']['search_form']);
      }
    ?>
    <?php print render($page['header']); ?>
  </div>

  <a href="#" id="mobile-toggle" title="Menu">Menu</a>

  <div class="slideshow">
    <?php print render($page['subheader']); ?>
  </div>

</header>