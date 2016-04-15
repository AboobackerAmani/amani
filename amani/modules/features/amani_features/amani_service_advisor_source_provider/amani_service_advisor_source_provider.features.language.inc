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
    'plurals' => '6',
    'formula' => '(($n==1)?(0):(($n==0)?(1):(($n==2)?(2):(((($n%100)>=3)&&(($n%100)<=10))?(3):(((($n%100)>=11)&&(($n%100)<=99))?(4):5)))))',
    'domain' => '',
    'prefix' => 'ar',
    'weight' => '0',
  );
  return $languages;
}
