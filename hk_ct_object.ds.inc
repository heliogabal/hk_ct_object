<?php
/**
 * @file
 * hk_ct_object.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function hk_ct_object_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|objekt|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'objekt';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_bezirk' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_developer' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_heating_type' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_moving_in_from' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_no_of_floors' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_objektid_nunumeric' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_rent_commission' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_status_quo' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_year_built' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_address' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_obj_apartments' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
  );
  $export['node|objekt|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|objekt|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'objekt';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
        'ft' => array(),
      ),
    ),
    'node_link' => array(
      'weight' => '10',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'Details',
        'wrapper' => 'div',
        'class' => 'flat',
        'ft' => array(),
      ),
    ),
    'field_object_images' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|objekt|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function hk_ct_object_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'adresse';
  $ds_field->label = 'Adresse';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'apartment|*';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['adresse'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'ansprechpartner_projekt';
  $ds_field->label = 'Ansprechpartner Projekt';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'apartment|*';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['ansprechpartner_projekt'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function hk_ct_object_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|objekt|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'objekt';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_object_images',
        1 => 'group_merkmale',
        2 => 'group_text',
        3 => 'field_obj_apartments',
        4 => 'field_objekt_wkt',
        5 => 'field_objektid_nunumeric',
        6 => 'field_address',
        7 => 'field_bezirk',
        8 => 'field_developer',
        9 => 'field_status_quo',
        10 => 'field_moving_in_from',
        11 => 'field_no_of_floors',
        12 => 'field_heating_type',
        13 => 'field_year_built',
        14 => 'field_rent_commission',
        15 => 'body',
        16 => 'field_object_location',
        17 => 'field_object_description',
        18 => 'field_object_other',
      ),
    ),
    'fields' => array(
      'field_object_images' => 'ds_content',
      'group_merkmale' => 'ds_content',
      'group_text' => 'ds_content',
      'field_obj_apartments' => 'ds_content',
      'field_objekt_wkt' => 'ds_content',
      'field_objektid_nunumeric' => 'ds_content',
      'field_address' => 'ds_content',
      'field_bezirk' => 'ds_content',
      'field_developer' => 'ds_content',
      'field_status_quo' => 'ds_content',
      'field_moving_in_from' => 'ds_content',
      'field_no_of_floors' => 'ds_content',
      'field_heating_type' => 'ds_content',
      'field_year_built' => 'ds_content',
      'field_rent_commission' => 'ds_content',
      'body' => 'ds_content',
      'field_object_location' => 'ds_content',
      'field_object_description' => 'ds_content',
      'field_object_other' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|objekt|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|objekt|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'objekt';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title_field',
        1 => 'body',
        2 => 'field_bezirk',
        3 => 'field_object_description',
        4 => 'field_objektid_nunumeric',
        5 => 'group_multiapart',
        6 => 'field_address',
        7 => 'field_object_multi_apart_types',
        8 => 'field_kategorie',
        9 => 'field_object_description_invest',
        10 => 'field_ansprechpartner',
        11 => 'group_horizontal',
        12 => 'group_ht_basis',
        13 => 'path',
        14 => 'field_object_desc_commercial',
        15 => 'field_object_location',
        16 => 'group_ort',
        17 => 'group_publish',
        18 => 'field_object_other',
        19 => 'group_ht_texte',
        20 => 'field_topobjekt',
        21 => 'group_ht_merkmale',
        23 => 'group_ht_bilder',
        25 => 'field_object_images',
        26 => 'group_obj_apartments',
        27 => 'group_ansprechpartner',
        28 => 'field_obj_apartments',
        29 => 'field_sale_commission',
        30 => 'field_rent_commission',
        31 => 'field_status_quo',
        32 => 'field_heating_type',
        33 => 'field_year_built',
        34 => 'field_no_of_floors',
        35 => 'field_moving_in_from',
        36 => 'field_developer',
        37 => 'field_save_workflow',
      ),
      'hidden' => array(
        22 => 'field_objekt_wkt',
        24 => 'redirect',
        38 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'title_field' => 'ds_content',
      'body' => 'ds_content',
      'field_bezirk' => 'ds_content',
      'field_object_description' => 'ds_content',
      'field_objektid_nunumeric' => 'ds_content',
      'group_multiapart' => 'ds_content',
      'field_address' => 'ds_content',
      'field_object_multi_apart_types' => 'ds_content',
      'field_kategorie' => 'ds_content',
      'field_object_description_invest' => 'ds_content',
      'field_ansprechpartner' => 'ds_content',
      'group_horizontal' => 'ds_content',
      'group_ht_basis' => 'ds_content',
      'path' => 'ds_content',
      'field_object_desc_commercial' => 'ds_content',
      'field_object_location' => 'ds_content',
      'group_ort' => 'ds_content',
      'group_publish' => 'ds_content',
      'field_object_other' => 'ds_content',
      'group_ht_texte' => 'ds_content',
      'field_topobjekt' => 'ds_content',
      'group_ht_merkmale' => 'ds_content',
      'field_objekt_wkt' => 'hidden',
      'group_ht_bilder' => 'ds_content',
      'redirect' => 'hidden',
      'field_object_images' => 'ds_content',
      'group_obj_apartments' => 'ds_content',
      'group_ansprechpartner' => 'ds_content',
      'field_obj_apartments' => 'ds_content',
      'field_sale_commission' => 'ds_content',
      'field_rent_commission' => 'ds_content',
      'field_status_quo' => 'ds_content',
      'field_heating_type' => 'ds_content',
      'field_year_built' => 'ds_content',
      'field_no_of_floors' => 'ds_content',
      'field_moving_in_from' => 'ds_content',
      'field_developer' => 'ds_content',
      'field_save_workflow' => 'ds_content',
      '_add_existing_field' => 'hidden',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|objekt|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|objekt|map_popup';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'objekt';
  $ds_layout->view_mode = 'map_popup';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_object_images',
        1 => 'title_field',
        2 => 'body',
      ),
    ),
    'fields' => array(
      'field_object_images' => 'ds_content',
      'title_field' => 'ds_content',
      'body' => 'ds_content',
    ),
    'limit' => array(
      'field_object_images' => '1',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|objekt|map_popup'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|objekt|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'objekt';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_project_card',
        1 => 'title',
        2 => 'field_object_images',
        3 => 'group_card_content',
        4 => 'body',
        5 => 'node_link',
      ),
    ),
    'fields' => array(
      'group_project_card' => 'ds_content',
      'title' => 'ds_content',
      'field_object_images' => 'ds_content',
      'group_card_content' => 'ds_content',
      'body' => 'ds_content',
      'node_link' => 'ds_content',
    ),
    'limit' => array(
      'field_object_images' => '1',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|objekt|teaser'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function hk_ct_object_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'map_popup';
  $ds_view_mode->label = 'map-popup';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['map_popup'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'project';
  $ds_view_mode->label = 'project';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['project'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'tile';
  $ds_view_mode->label = 'tile';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['tile'] = $ds_view_mode;

  return $export;
}
