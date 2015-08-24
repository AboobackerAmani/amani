<?php
/**
 * @file
 * peace_geeks_facts.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function peace_geeks_facts_taxonomy_default_vocabularies() {
  return array(
    'fact_type' => array(
      'name' => 'Fact Type',
      'machine_name' => 'fact_type',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'language' => 'und',
      'i18n_mode' => '0',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
