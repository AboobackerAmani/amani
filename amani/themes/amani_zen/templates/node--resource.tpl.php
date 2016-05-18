<?php print render($content['field_image']); ?>
<div class="inner-content">
  <div class="share-icons">
    <h3>Share</h3>
    <div class="social-menu">
      <?php
        $menu_tree = menu_tree('menu-social-media');
        foreach ($menu_tree as $key => $item) {
          if (array_key_exists('#original_link', $item)) {
            $menu_link = $item["#href"];
            $menu_class = strtolower($item['#title']);
            print "<a target='_blank' href='$menu_link'><div class='social-media-$menu_class'></div></a>";
          }
        }
      ?>
    </div>
  </div>
  <h1 id="node-title"><?php print $title; ?></h1>
  <div class="content-body">
    <div class="meta-info">
      <p>
        <?php print render($content['field_date']); ?>
      </p>
      <p>
        <?php if (!empty($node->field_resource_type)): ?>
          <a href="<?php print taxonomy_term_uri($node->field_resource_type['und'][0]['taxonomy_term'])['path']; ?>"><?php print $node->field_resource_type['und'][0]['taxonomy_term']->name; ?></a>
        <?php endif; ?>
      </p>
      <p>
        <?php if (!empty($node->field_theme_s_)): ?>
          <a href="<?php print taxonomy_term_uri($node->field_theme_s_['und'][0]['taxonomy_term'])['path']; ?>"><?php print $node->field_theme_s_['und'][0]['taxonomy_term']->name; ?></a>
        <?php endif; ?>
      </p>
      <p>
        <?php print render($content['field_location_name']); ?>
      </p>
      <p>
        <?php print render($content['field_link']); ?>
      </p>
    </div>
    <?php print render($content['body']); ?>
    <?php print render($content['field_amani_tags']); ?>
    <div class="file-download">
      <div>
        <?php print render($content['field_media']); ?>
      </div>
      <div>
        <?php if(strpos($content['field_media']['#items'][0]['filemime'], 'video') === false) : ?>
        <div class="download-button">
          <a href="<?php print $field_media_download; ?>">DOWNLOAD</a>
        </div>
        <?php endif; ?>
      </div>
    </div>
  </div>
</div>
