<?php
/**
 * @file
 * Returns the HTML for a single Drupal page.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728148
 */
?>

<div id="page" class="<?php print $classes; ?>"<?php print $attributes; ?>>

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

  <section id="content-top" class="clearfix">

    <?php if($page['home_content_top_rotator'] || $page['home_content_top_callout_right'] || $page['home_content_top_static_region']): ?>
    <section id="content-top" class="clearfix" class="container">
      <div class="container-inner">
        <?php if ($page['home_content_top_rotator']): ?>
          <?php if ($breadcrumb): ?>
            <?php print $breadcrumb; ?>
          <?php endif; ?>
          <?php print render($page['home_content_top_rotator']); ?>
        <?php endif; ?>
      </div>
    </section>
    <?php endif; ?>

  </section>

  <div id="main" class="clearfix" class="container">
    <?php if ($breadcrumb || $title|| $messages || $tabs || $action_links): ?>
      <div id="content-header">

        <?php if ($breadcrumb && !$page['home_content_top_rotator']): ?>
          <?php print $breadcrumb; ?>
        <?php endif; ?>
        <!-- Twitter Block & Current project Block -->
        <div id="current_projects" class="current_projects">
          <?php print render($page['current_projects']); ?>
        </div>


        <?php print render($page['twitter']) ?>


        <?php print render($title_prefix); ?>
        <!-- /Twitter Block & Current project Block -->


        <!-- meet_volunteer -->
        <div id="meet_volunteer" class="column meet_volunteer">
          <?php print render($page['meet_volunteer']); ?>
        </div>
        <!-- /meet_volunteer -->

        <!-- Latest Blog Post to Peace talks row -->
        <div id="latest_blog_post">
          <?php print render($page['latest_blog_post']) ?>
        </div>
        <?php print $feed_icons; ?>
        <!-- /latest_blog_post -->

        <!-- peace_talks -->
        <div id="peace_talks" class="column peace talks">
          <?php print render($page['peace_talks']); ?>
        </div>
        <!-- /peace_talks -->
        <!-- /Latest Blog Post to Peace talks row -->


        <!-- Area of focus & Get Involved -->
        <div id="area_of_focus" class="area_of_focus">
          <?php print render($page['area_of_focus']) ?>
        </div>

        <div id="get_involved" class="get_involved">
          <?php print render($page['get_involved']) ?>
        </div>
        <!-- /Area of focus & Get Involved -->

        <!-- Useless stuff (might need it) -->
        <?php if ($title): ?>
          <h1 class="title"><?php print $title; ?></h1>
        <?php endif; ?>

        <?php print render($title_suffix); ?>
        <?php print $messages; ?>

        <?php if ($tabs): ?>
          <div class="tabs"><?php print render($tabs); ?></div>
        <?php endif; ?>

        <?php if ($action_links): ?>
          <ul class="action-links"><?php print render($action_links); ?></ul>
        <?php endif; ?>
        <!-- /Useless stuff (might need it) -->

      </div> <!-- /#content-header -->
    <?php endif; ?>
  </div>


  <?php if ($page['footer']): ?>
    <footer id="footer" class="container">
      <div class="container-inner">
        <?php print render($page['footer']); ?>
      </div>
    </footer> <!-- /footer -->
  <?php endif; ?>

</div>

<?php print render($page['bottom']); ?>
