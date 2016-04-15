<?php
/**
 * @file
 * amani_opportunity_content.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function amani_opportunity_content_taxonomy_default_vocabularies() {
  return array(
    'opportunity_type' => array(
      'name' => 'Opportunity type',
      'machine_name' => 'opportunity_type',
      'description' => 'List the opportunities type',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'language' => 'und',
      'i18n_mode' => '1',
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
