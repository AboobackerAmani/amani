<?php

module_load_include('inc', 'amani_service_advisor_source_provider', 'includes/amani_service_advisor_source_provider.api');

$vocabularies_to_load = array (
  'service_accessibility',
  'service_available_nationality',
  'service_coverage',
  'service_intake_criteria',
  'service_registration_type'
);

foreach ($vocabularies_to_load as $vocabulary){
  print "Importing " . $vocabulary . "\n";
  amani_service_advisor_source_provider_load_vocabulary($vocabulary);
}