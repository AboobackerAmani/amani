<?php

/*
 * Import vocabularies for Service Advisor content types.
 *
 * Usage: drush scr profiles/amani/modules/features/amani_features/amani_service_advisor_source_provider/drush/amani_services_load_terms.php [optional_vocabulary_name]
 *
 */

module_load_include('inc', 'amani_service_advisor_source_provider', 'includes/amani_service_advisor_source_provider.api');

amani_service_advisor_source_provider_load_lat_long();