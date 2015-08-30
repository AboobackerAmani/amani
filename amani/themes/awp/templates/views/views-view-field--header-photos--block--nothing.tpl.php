<?php $nid=$row->_field_data['nid']['entity']->nid;
//print $nid;
//$mynode=node_load($nid);

$path_alias=drupal_get_path_alias();
//print $path_alias;
//exit();

$query = new EntityFieldQuery();
$query->entityCondition('entity_type', 'node')
    ->entityCondition('bundle', 'header_photos')
    ->propertyCondition('status', 1)
    ->fieldCondition('field_view_in_path_', 'value',$path_alias);

$result = $query->execute();


$nodes = node_load_multiple(array_keys($result['node']));


return node_view_multiple($nodes, 'full');

?>

