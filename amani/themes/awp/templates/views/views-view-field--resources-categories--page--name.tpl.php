<?php
$tid = $data = $row->$field->tid;
print_r($tid);
$term = taxonomy_term_load($tid);
$translated_term = i18n_taxonomy_localize_terms($term);
print $translated_term->name;

?>