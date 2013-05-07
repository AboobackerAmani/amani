<?php foreach ($fields as $id => $field): ?>
  <?php $item[$id] = $field->content; ?>
<?php endforeach; ?>

<?php //krumo($item); ?>
<div class="slideshow-item">
  <div class="left-col">
    <?php echo $item['field_image']; ?>
  </div>
  <div class="right-col">
    <?php echo $item['title']; ?>
    <?php echo $item['body']; ?>
  </div>
</div>