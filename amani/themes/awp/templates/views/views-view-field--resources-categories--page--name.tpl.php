<?php


$tree = taxonomy_get_tree($data = $row->$field->tid); // Your taxonomy id

foreach ($tree as $term) {
    if (module_exists('i18n_taxonomy')) { //To not break your site if module is not installed
        $term = i18n_taxonomy_localize_terms($term); // The important part!
    }
    print l($term->name, 'taxonomy/term/' . $term->tid); //print the terms
}



?>