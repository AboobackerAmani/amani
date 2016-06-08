<?php
/**
 * @file
 * Returns the HTML for a single Drupal page.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728148
 */
?>

<?php include_once('siteheader.tpl.inc'); ?>

<div id="page">

  <div id="main">
    <h1 class="title">Blog</h1>
    <?php print render($title_prefix); ?>
    <?php if ($title): ?>
    <div class="article-title-wrapper">
      <div class="article-title"><?php print $title; ?></div>
    </div>
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

