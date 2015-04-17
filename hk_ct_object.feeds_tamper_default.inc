<?php
/**
 * @file
 * hk_ct_object.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function hk_ct_object_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'd6_objekt_import-germany-default_value';
  $feeds_tamper->importer = 'd6_objekt_import';
  $feeds_tamper->source = 'Germany';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => 'DE',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Set default value';
  $export['d6_objekt_import-germany-default_value'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'd6_objekt_import-objektfotos-explode';
  $feeds_tamper->importer = 'd6_objekt_import';
  $feeds_tamper->source = 'Objektfotos';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['d6_objekt_import-objektfotos-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'd6_objekt_import-sprache-deutsch_de';
  $feeds_tamper->importer = 'd6_objekt_import';
  $feeds_tamper->source = 'Sprache';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Deutsch',
    'replace' => 'DE',
    'case_sensitive' => 1,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_replace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace';
  $export['d6_objekt_import-sprache-deutsch_de'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'd6_objekt_import-sprache-find_replace';
  $feeds_tamper->importer = 'd6_objekt_import';
  $feeds_tamper->source = 'Sprache';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'English',
    'replace' => 'EN',
    'case_sensitive' => 1,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_replace',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace';
  $export['d6_objekt_import-sprache-find_replace'] = $feeds_tamper;

  return $export;
}
