<?php
/**
 * @file
 * Returns the HTML for the footer region.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728140
 */
?>
<?php if ($content): ?>
	<div id="top-scroll"><div id="scroll-icon"></div><div>Top</div></div>
  <div id="footer-wrapper">
  <footer id="footer" class="<?php print $classes; ?>">
    <?php print $content; ?>
  </footer>
</div>
<?php endif; ?>
