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
		<?php print render($title_prefix); ?>
    <?php if ($title && isset($node) && $node->type == 'team'): ?>
      <h1 class="page__title title" id="page-title"><?php print t('Team'); ?></h1>
    <?php elseif ($title): ?>
      <h1 class="page__title title" id="page-title"><?php print $title; ?></h1>
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

      <?php //dsm($page['content']); ?>

      <?php
      		/* MARK: -- Organize the blocks hierarchy. */

      		$filteredElements = array();
      		foreach ($page['content'] as $key => $render_item) {

      			/// MARK: -- any block that needs to have the background image, `ADD()` it's block name in the array below
      			if (in_array($key, array('views_front_page_tweets-block', 'fb_likebox_0', 'views_calendar_of_events-block_3'))) {
      				$filteredElements['front-page-bg-image-blocks'][] = $render_item;
      			} else {
      				$filteredElements[] = $render_item;
      			}
      		}
      ?>

      <?php
	      foreach($filteredElements as $key => $item) {
	      	if ($key === 'front-page-bg-image-blocks') {
	      		print ('<div class="front-page-bg-image" style="background-image:url('.file_create_url(file_load(theme_get_setting('front_page_blocks_background_image'))->uri).')">'.render($item).'</div>');
	      	} else {
	      		print render($item);
	      	}
	      }
      ?>

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

<div class="content_bottom">
  <?php print render($page['content_bottom']); ?>
</div>

<?php include_once('sitefooter.tpl.inc'); ?>
