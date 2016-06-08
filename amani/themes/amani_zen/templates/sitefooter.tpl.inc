<?php
/**
 * @file
 * Returns the HTML `<footer>` for a single Drupal page.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728148
 */
?>

<div class="footer-top"></div>

<div class="footer-wrapper">
  <?php
  if (variable_get('site_searchbar_position') == 1) {
  	array_splice($page['footer'], 6, 0, array($search_form));
  } 
  ?>
  <?php print render($page['footer']); ?>
</div>

<div class="footer-legal">
  <div>&copy; <?php echo date("Y"); ?> <?php print $site_name; ?></div>
</div>