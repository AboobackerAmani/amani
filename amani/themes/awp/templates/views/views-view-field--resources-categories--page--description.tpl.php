<?php
$tid =  $row->tid;
$term = taxonomy_term_load($tid);
$translated_term = i18n_taxonomy_localize_terms($term);
//print $translated_term->name;
print $translated_term->description;
print_r $translated_term->description;

?>