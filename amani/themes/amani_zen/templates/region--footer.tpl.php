<?php
/**
 * @file
 * Returns the HTML for the footer region.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728140
 */
?>
  <div class="footer-top"></div>
<?php if ($content): ?>
  <div class="footer-wrapper">
    <footer id="footer" class="<?php print $classes; ?>">
      <?php print $content; ?>
      <div id="wrapper-powered-by">
        <div id="logo-amani-powered-by"></div>
        <div id="logo-peacegeeks"></div>
      </div>
    </footer>
  </div>
<?php endif; ?>
  <div class="footer-legal">
    <div>&copy; <?php echo date("Y"); ?> <?php print $elements['site_name']; ?></div>
  </div>
