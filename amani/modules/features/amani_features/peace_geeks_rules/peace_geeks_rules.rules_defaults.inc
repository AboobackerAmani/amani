<?php
/**
 * @file
 * peace_geeks_rules.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function peace_geeks_rules_default_rules_configuration() {
  $items = array();
  $items['rules_redirect_user_to_amani_admin_page_on_login'] = entity_import('rules_config', '{ "rules_redirect_user_to_amani_admin_page_on_login" : {
      "LABEL" : "Redirect user to amani admin page on login",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_login" : [] },
      "DO" : [ { "redirect" : { "url" : "\\/amani\\/content-admin" } } ]
    }
  }');
  return $items;
}
