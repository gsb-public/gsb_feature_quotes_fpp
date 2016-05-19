<?php
/**
 * @file
 * gsb_feature_quotes_fpp.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function gsb_feature_quotes_fpp_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'fieldable_panels_pane|quotes|default';
  $ds_fieldsetting->entity_type = 'fieldable_panels_pane';
  $ds_fieldsetting->bundle = 'quotes';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'quotes' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
        'conditions' => array(),
      ),
    ),
  );
  $export['fieldable_panels_pane|quotes|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function gsb_feature_quotes_fpp_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'quotes';
  $ds_field->label = 'Quotes';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'fieldable_panels_pane' => 'fieldable_panels_pane',
  );
  $ds_field->ui_limit = 'quotes|*';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<a href="[fieldable_panels_pane:field-existing-node-title-ref:url]"><span class="first-double-apostrophe">&ldquo;</span><span class="quote">[fieldable_panels_pane:field-body]</span><span class="last-double-apostrophe">&rdquo;</span>
<span class="dash">—</span><span class="attribution">[fieldable_panels_pane:field_attribution]</span></a>',
      'format' => 'full_html',
    ),
    'use_token' => 1,
  );
  $export['quotes'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function gsb_feature_quotes_fpp_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'fieldable_panels_pane|quotes|default';
  $ds_layout->entity_type = 'fieldable_panels_pane';
  $ds_layout->bundle = 'quotes';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'quotes',
      ),
    ),
    'fields' => array(
      'quotes' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['fieldable_panels_pane|quotes|default'] = $ds_layout;

  return $export;
}
