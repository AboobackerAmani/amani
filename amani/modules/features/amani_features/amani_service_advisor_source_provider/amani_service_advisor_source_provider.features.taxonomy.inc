<?php
/**
 * @file
 * amani_service_advisor_source_provider.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function amani_service_advisor_source_provider_taxonomy_default_vocabularies() {
  return array(
    'service_accessibility' => array(
      'name' => 'Service Accessibility',
      'machine_name' => 'service_accessibility',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '7',
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
    'service_available_languages' => array(
      'name' => 'Service Language',
      'machine_name' => 'service_available_languages',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '10',
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
    'service_categories' => array(
      'name' => 'Service Category',
      'machine_name' => 'service_categories',
      'description' => 'Service categories available to be used in service advisor app ',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '9',
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
    'service_coverage' => array(
      'name' => 'Service Coverage',
      'machine_name' => 'service_coverage',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '8',
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
    'service_intake_criteria' => array(
      'name' => 'Service Intake Criteria',
      'machine_name' => 'service_intake_criteria',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '10',
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
    'service_location_availability_days' => array(
      'name' => 'Service Location Availability days',
      'machine_name' => 'service_location_availability_days',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '10',
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
    'service_location_hour_close' => array(
      'name' => 'Service Location Office closes at',
      'machine_name' => 'service_location_hour_close',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '10',
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
    'service_location_hour_open' => array(
      'name' => 'Service Location Office opens at',
      'machine_name' => 'service_location_hour_open',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '10',
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
    'service_registration_type' => array(
      'name' => 'Service Registration Type',
      'machine_name' => 'service_registration_type',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '10',
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
    'service_response_delay' => array(
      'name' => 'Service Response Delay',
      'machine_name' => 'service_response_delay',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '10',
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
    'services_available_nationality' => array(
      'name' => 'Services Available Nationality',
      'machine_name' => 'services_available_nationality',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '10',
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
