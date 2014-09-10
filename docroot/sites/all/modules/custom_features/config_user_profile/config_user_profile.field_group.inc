<?php
/**
 * @file
 * config_user_profile.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function config_user_profile_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_personal_info|user|user|form';
  $field_group->group_name = 'group_user_personal_info';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Personal Information',
    'weight' => '1',
    'children' => array(
      0 => 'field_user_company',
      1 => 'field_user_first_name',
      2 => 'field_user_last_name',
      3 => 'field_user_position',
      4 => 'field_image',
      5 => 'field_biography',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-user-personal-info field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_user_personal_info|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_subscription|user|user|form';
  $field_group->group_name = 'group_user_subscription';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'MailChimp Subscription',
    'weight' => '3',
    'children' => array(
      0 => 'field_user_email',
      1 => 'field_user_mailchimp',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-user-subscription field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_user_subscription|user|user|form'] = $field_group;

  return $export;
}
