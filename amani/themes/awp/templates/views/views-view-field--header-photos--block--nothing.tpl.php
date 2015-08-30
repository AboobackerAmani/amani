<?php $nid=$row->_field_data['nid']['entity']->nid;
//print $nid;
//$mynode=node_load($nid);

$path_alias=drupal_get_path_alias();
//print $path_alias;
//exit();
global $language;
$query = new EntityFieldQuery();
$query->entityCondition('entity_type', 'node')
    ->entityCondition('bundle', 'header_photos')
    ->propertyCondition('status', 1)
    ->propertyCondition('language', $language->language, '=')
->fieldCondition('field_view_in_path_', 'value',$path_alias);

$result = $query->execute();


$nodes = node_load_multiple(array_keys($result['node']));

foreach($nodes as $node) {
    //field_header_image

    $imageone = $node->field_header_image[LANGUAGE_NONE][0]['uri'];
    $style = 'header_photo';
    $styled_image= image_style_url($style, $imageone);
    $html_image='<img src="'.$styled_image.'">';
}
print $html_image;
exit();

?>

