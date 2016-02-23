<?php

/*
 * Create all terms from a source file
 */
function amani_service_advisor_source_provider_load_vocabulary($vocabulary) {
  if (! $vocabulary){
    return false;
  }
  // Read all terms in from term file
  $terms_path = drupal_get_path('module', 'amani_service_advisor_source_provider') . '/terms/' . $vocabulary . '.terms';
  $source_terms = amani_service_advisor_source_provider_load_terms_file($terms_path);

  if ($source_terms) {
    if ($vocab = taxonomy_vocabulary_machine_name_load($vocabulary)) {
      $current_terms = amani_service_advisor_source_provider_get_terms($vocab);
      $new_terms = array_diff_key($source_terms, $current_terms);
      foreach ($new_terms as $term_name => $term_values) {
        if (empty($term_name)) {
          continue;
        }
        // Create new term
        $term = new stdClass();
        $term->vid = $vocab->vid;
        $term->name = $term_name;
        taxonomy_term_save($term);
      }
    }
  }
}

/*
 * Helper function to get all taxonomy tree by vocabulary name, indexed by term name
 */
function amani_service_advisor_source_provider_get_terms($vocab) {
  $terms = array();
  if ($db_terms = taxonomy_get_tree($vocab->vid)) {
    foreach ($db_terms as $term) {
      $terms[$term->name] = $term;
    }
  }
  return $terms;
}

/*
 * Helper function to load a term file
 */
function amani_service_advisor_source_provider_load_terms_file($terms_file) {
  $source_terms = file_get_contents($terms_file);
  $source_terms = explode("\n", $source_terms);
  $terms = array();
  foreach ($source_terms as $source_term) {
    $term_properties = explode(',', $source_term);
    $terms[$term_properties[0]] = $term_properties;
  }
  return $terms;
}

/*
 * Import the default categories and subcategories
 */
function amani_service_advisor_source_provider_load_categories() {
  $terms_path = drupal_get_path('module', 'amani_service_advisor_source_provider') . '/terms/service_categories.terms';
  $source_terms = amani_service_advisor_source_provider_load_terms_file($terms_path);
  if ($source_terms) {
    print "Importing service_categories\n";
    $created_terms = array();
    $vocab = taxonomy_vocabulary_machine_name_load('service_categories');
    $current_terms = amani_service_advisor_source_provider_get_terms($vocab);
    $new_terms = array_diff_key($source_terms, $current_terms);


    foreach ($new_terms as $term_name => $term_values) {
      if (! $term_name){
        continue;
      }
      $term_parent = $term_values[1];
      $term = new stdClass();
      $term->vid = $vocab->vid;
      $term->name = $term_name;
      if (! $term_parent){
        taxonomy_term_save($term);
        $created_terms[$term->name] = $term;
      } else {
        $term->parent = $created_terms[$term_parent]->tid;
        taxonomy_term_save($term);
        $created_terms[$term->name] = $term;
      }
      print "Created " . $term->name . ' (' . $term->tid . ")\n";
    }
  }
}


/*
 * Import the default categories and subcategories
 */
function amani_service_advisor_source_provider_load_lat_long() {
  $terms_path = drupal_get_path('module', 'amani_service_advisor_source_provider') . '/data/latlong.csv';
  $source_terms = amani_service_advisor_source_provider_load_terms_file($terms_path);
  if ($source_terms) {
    print "Importing lat/long for nested locations\n";
    $vocab = taxonomy_vocabulary_machine_name_load('service_nested_location');
    $current_terms = amani_service_advisor_source_provider_get_terms($vocab);

    foreach ($source_terms as $term_name => $term_values) {
      if ($current_terms[$term_name]){
        $term = $current_terms[$term_name];
        $term->field_location_point['und'][0] = array(
          'lat' => trim($term_values[2]),
          'lon' => trim($term_values[1]),
          'wkt' => 'POINT (' . trim($term_values[2]) . ',' . trim($term_values[2]) . ')',
          'geo_type' => 'point'
        );
        taxonomy_term_save($term);
      }
    }

  }
}



