<?php

module_load_include('inc', 'amani_service_advisor_source_provider', 'includes/amani_service_advisor_source_provider.api');

$vocabularies_to_load = array (
  'service_accessibility',
  'service_available_nationality',
  'service_availability',
  'service_coverage',
  'service_intake_criteria',
  'service_registration_type',
  'service_location_availability_days',
  'service_location_hour_open',
  'service_location_hour_close',
  'service_activities',
  'service_feedback_delay',
  'service_feedback_mechanism',
  'service_referral_method',
  'service_referral_next_step',
  'service_response_delay',
  'service_location_district',
  'service_location_governorate',
  'service_location_region'
);

foreach ($vocabularies_to_load as $vocabulary){
  print "Importing " . $vocabulary . "\n";
  amani_service_advisor_source_provider_load_vocabulary($vocabulary);
}

amani_service_advisor_source_provider_load_categories();
