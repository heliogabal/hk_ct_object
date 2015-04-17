<?php
/**
 * @file
 * hk_ct_object.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function hk_ct_object_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_address'
  $field_bases['field_address'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_address',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'addressfield',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'addressfield',
  );

  // Exported field_base: 'field_ansprechpartner'
  $field_bases['field_ansprechpartner'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_ansprechpartner',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'individual' => 'individual',
        ),
      ),
      'target_type' => 'crm_core_contact',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_bezirk'
  $field_bases['field_bezirk'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_bezirk',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'vocabulary_3',
          'parent' => 0,
        ),
      ),
      'entity_translation_sync' => FALSE,
      'options_list_callback' => NULL,
    ),
    'translatable' => 1,
    'type' => 'taxonomy_term_reference',
    'type_name' => 'residential_commercial_building',
  );

  // Exported field_base: 'field_developer'
  $field_bases['field_developer'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_developer',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_grundriss'
  $field_bases['field_grundriss'] = array(
    'active' => 1,
    'cardinality' => 5,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_grundriss',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => NULL,
      'description_field' => 0,
      'entity_translation_sync' => array(
        0 => 'fid',
      ),
      'list_default' => 1,
      'list_field' => 0,
      'semantic_cck_field_settings' => array(
        'enabled' => 0,
        'field_class' => '',
        'field_element' => 'div',
        'first_class' => 'first',
        'label_class_above' => '',
        'label_class_inline' => '',
        'label_element_above' => 'h3',
        'label_element_inline' => 'span',
        'label_suffix_above' => '',
        'label_suffix_inline' => ':',
        'last_class' => 'last',
        'last_every_nth' => 0,
        'multiple_item_class' => '',
        'multiple_item_element' => 'div',
        'multiple_items_class' => '',
        'multiple_items_element' => 'div',
        'single_item_class' => '',
        'single_item_element' => 'div',
        'striping_classes' => 'odd even',
        'use_singlevalue_settings' => 0,
      ),
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
    'type_name' => 'wohnung',
  );

  // Exported field_base: 'field_heating_type'
  $field_bases['field_heating_type'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_heating_type',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Central heating' => 'Central heating',
        'Central oil heating' => 'Central oil heating',
        'Self-contained central heating' => 'Self-contained central heating',
        'Self-contained gas heating' => 'Self-contained gas heating',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 1,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_moving_in_from'
  $field_bases['field_moving_in_from'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_moving_in_from',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_no_of_floors'
  $field_bases['field_no_of_floors'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_no_of_floors',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_nutzflaeche'
  $field_bases['field_nutzflaeche'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_nutzflaeche',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'allowed_values' => array(),
      'allowed_values_php' => '',
      'decimal_separator' => ',',
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => '',
      'precision' => 10,
      'prefix' => 'ca. ',
      'scale' => 2,
      'semantic_cck_field_settings' => array(
        'enabled' => 0,
        'field_class' => '',
        'field_element' => '',
        'field_prefix' => '',
        'field_suffix' => '',
        'first_class' => 'first',
        'label_class_above' => '',
        'label_class_inline' => '',
        'label_element_above' => 'h3',
        'label_element_inline' => 'span',
        'label_suffix_above' => '',
        'label_suffix_inline' => ':',
        'last_class' => 'last',
        'last_every_nth' => 0,
        'multiple_item_class' => '',
        'multiple_item_element' => 'div',
        'multiple_item_separator' => '',
        'multiple_items_class' => '',
        'multiple_items_element' => 'div',
        'single_item_class' => '',
        'single_item_element' => 'div',
        'striping_classes' => 'odd even',
        'use_singlevalue_settings' => 0,
      ),
      'suffix' => ' m²',
    ),
    'translatable' => 0,
    'type' => 'number_decimal',
    'type_name' => 'wohnung',
  );

  // Exported field_base: 'field_obj_apartments'
  $field_bases['field_obj_apartments'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_obj_apartments',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'apartment' => 'apartment',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_object_desc_commercial'
  $field_bases['field_object_desc_commercial'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_object_desc_commercial',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 1,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_object_description'
  $field_bases['field_object_description'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_object_description',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 1,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_object_description_invest'
  $field_bases['field_object_description_invest'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_object_description_invest',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 1,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_object_images'
  $field_bases['field_object_images'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_object_images',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'entity_translation_sync' => array(
        0 => 'fid',
      ),
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_object_location'
  $field_bases['field_object_location'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_object_location',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 1,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_object_multi_apart_types'
  $field_bases['field_object_multi_apart_types'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_object_multi_apart_types',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'nein',
        1 => 'ja',
      ),
      'allowed_values_function' => '',
      'allowed_values_no_localization' => 0,
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_object_other'
  $field_bases['field_object_other'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_object_other',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 1,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_status_quo'
  $field_bases['field_status_quo'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_status_quo',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'First Occupancy' => 'First Occupancy',
        'First Occupancy after Renovation' => 'First Occupancy after Renovation',
        'Well-Tended' => 'Well-Tended',
        'Normal' => 'Normal',
        'Well preserved' => 'Well preserved',
        'Like New' => 'Like New',
        'Modernised' => 'Modernised',
        'Completely Refurbished' => 'Completely Refurbished',
        'Partially restored' => 'Partially restored',
        'Renovated' => 'Renovated',
        'No Information' => 'No Information',
      ),
      'allowed_values_function' => '',
      'allowed_values_no_localization' => 0,
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 1,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_topobjekt'
  $field_bases['field_topobjekt'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_topobjekt',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'allowed_values' => '',
      'allowed_values_php' => '',
      'entity_translation_sync' => FALSE,
      'max_length' => 100,
      'semantic_cck_field_settings' => array(
        'enabled' => 0,
        'field_class' => '',
        'field_element' => '',
        'field_prefix' => '',
        'field_suffix' => '',
        'first_class' => 'first',
        'label_class_above' => '',
        'label_class_inline' => '',
        'label_element_above' => 'h3',
        'label_element_inline' => 'span',
        'label_suffix_above' => '',
        'label_suffix_inline' => ':',
        'last_class' => 'last',
        'last_every_nth' => 0,
        'multiple_item_class' => '',
        'multiple_item_element' => 'div',
        'multiple_item_separator' => '',
        'multiple_items_class' => '',
        'multiple_items_element' => 'div',
        'single_item_class' => '',
        'single_item_element' => 'div',
        'striping_classes' => 'odd even',
        'use_singlevalue_settings' => 0,
      ),
      'text_processing' => 1,
    ),
    'translatable' => 0,
    'type' => 'text',
    'type_name' => 'objekt',
  );

  // Exported field_base: 'field_year_built'
  $field_bases['field_year_built'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_year_built',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  return $field_bases;
}
