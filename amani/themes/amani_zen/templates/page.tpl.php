<?php
/**
 * @file
 * Returns the HTML for a single Drupal page.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728148
 */
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
    <?php print render($page['header']); ?>
  </div>

	<a href="#" id="mobile-toggle" title="Menu">Menu</a>

  <div class="slideshow">
    <?php print render($page['subheader']); ?>
  </div>

</header>

<div id="page">

  <div id="main">
		<?php print render($title_prefix); ?>
    <?php if ($title && $node->type != 'team'): ?>
      <h1 class="page__title title" id="page-title"><?php print $title; ?></h1>
    <?php else: ?>
      <h1 class="page__title title" id="page-title"><?php print t('Team'); ?></h1>
    <?php endif; ?>
    <?php print render($title_suffix); ?>
    <div id="content" class="column" role="main">
      <?php print render($page['highlighted']); ?>
      <?php print $breadcrumb; ?>
      <a id="main-content"></a>
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

</div>

<div class="footer-top"></div>

<div class="footer-wrapper">
  <?php print render($page['footer']); ?>
</div>

<div class="footer-legal">
  <div>&copy; <?php echo date("Y"); ?> <?php print $site_name; ?></div>
</div>

