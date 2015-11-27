<?php
/**
 * @file
 * amani_sms.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function amani_sms_taxonomy_default_vocabularies() {
  return array(
    'sms_location' => array(
      'name' => 'Sms Location',
      'machine_name' => 'sms_location',
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
