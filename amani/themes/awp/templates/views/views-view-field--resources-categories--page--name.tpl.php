<?php
$tid =  $row->tid;
$term = taxonomy_term_load($tid);
$translated_term = i18n_taxonomy_localize_terms($term);
//print strip_tags($translated_term->name);
print '<a href="resources-list/'.$tid.'">'.strip_tags($translated_term->name).'</a>';
//print $translated_term->description;

?>