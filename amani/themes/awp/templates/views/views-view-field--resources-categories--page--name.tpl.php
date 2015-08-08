<?php
//$tid = $data = $row->{$field->tid};
$term = taxonomy_term_load(63);
$translated_term = i18n_taxonomy_localize_terms($term);
print $translated_term->name;

?>