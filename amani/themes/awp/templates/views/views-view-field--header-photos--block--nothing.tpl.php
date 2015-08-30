<?php // $nid=$row->_field_data['nid']['entity']->nid;

$path_alias=drupal_get_path_alias();
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
    if (isset($node->field_image_link) ) {
        if (!empty($node->field_image_link)){
            $image_link = $node->field_image_link[LANGUAGE_NONE][0][url];
            $link_target = $node->field_image_link[LANGUAGE_NONE][0][attributes][target];
            print_r($node->field_image_link);
            //exit();
            if ($link_target=="0"){
                $html_image='<a href="'.$image_link.'"><img src="'.$styled_image.'"></a>';
            }
            else{
                $html_image='<a href="'.$image_link.'" target="'.$link_target.'"><img src="'.$styled_image.'"></a>';
            }
        }//if (!empty($node->field_image_link)){
    }//if (isset($node->field_image_link) ) {
    else {
        $html_image = '<img src="' . $styled_image . '">';
    }
}
print $html_image;


