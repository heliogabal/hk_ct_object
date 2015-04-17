<?php
/**
 * @file
 * hk_ct_object.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function hk_ct_object_taxonomy_default_vocabularies() {
  return array(
    'heating_type' => array(
      'name' => 'Heating type',
      'machine_name' => 'heating_type',
      'description' => 'Is being used in the object content type',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'status_quo' => array(
      'name' => 'Status quo',
      'machine_name' => 'status_quo',
      'description' => 'Is being used in the object content type to describe the maintenance state of the object',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'vocabulary_3' => array(
      'name' => 'Boroughs',
      'machine_name' => 'vocabulary_3',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'features_bezirke',
      'weight' => -5,
    ),
  );
}
