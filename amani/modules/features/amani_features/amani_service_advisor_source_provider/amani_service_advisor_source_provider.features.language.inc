<?php
/**
 * @file
 * amani_service_advisor_source_provider.features.language.inc
 */

/**
 * Implements hook_locale_default_languages().
 */
function amani_service_advisor_source_provider_locale_default_languages() {
  $languages = array();

  // Exported language: ar.
  $languages['ar'] = array(
    'language' => 'ar',
    'name' => 'Arabic',
    'native' => 'العربية',
    'direction' => '1',
    'enabled' => '1',
    'plurals' => '0',
    'formula' => '',
    'domain' => '',
    'prefix' => 'ar',
    'weight' => '0',
  );
  return $languages;
}
