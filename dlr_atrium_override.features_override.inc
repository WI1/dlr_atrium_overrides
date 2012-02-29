<?php

/**
 * Implementation of hook_default_features_overrides().
 */
function dlr_atrium_override_default_features_overrides() {
  $export = array();

  $features_override = new stdClass;
  $features_override->disabled = FALSE; /* Edit this to true to make a default features_override disabled initially */
  $features_override->api_version = 1;
  $features_override->name = 'dlr_atrium_activity_listing';
  $features_override->description = 'Adds project logos as an overlay on top of crayon project pictures';
  $features_override->component_type = 'views';
  $features_override->component_id = 'activity_listing';
  $features_override->value = array(
    'additions' => array(
      0 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'relationships',
          ),
        ),
        'value' => array(
          'group_nid' => array(
            'label' => 'Gruppenbeitrag (Beitrag)',
            'required' => 0,
            'id' => 'group_nid',
            'table' => 'og_ancestry',
            'field' => 'group_nid',
            'relationship' => 'none',
          ),
        ),
      ),
      1 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'defaults',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'relationships',
          ),
        ),
        'value' => FALSE,
      ),
      2 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'field_projectlogo_fid',
          ),
        ),
        'value' => array(
          'label' => '',
          'alter' => array(
            'alter_text' => 0,
            'text' => '',
            'make_link' => 0,
            'path' => '',
            'absolute' => 0,
            'link_class' => '',
            'alt' => '',
            'rel' => '',
            'prefix' => '',
            'suffix' => '',
            'target' => '',
            'help' => '',
            'trim' => 0,
            'max_length' => '',
            'word_boundary' => 1,
            'ellipsis' => 1,
            'html' => 0,
            'strip_tags' => 0,
          ),
          'empty' => '',
          'hide_empty' => 1,
          'empty_zero' => 0,
          'hide_alter_empty' => 1,
          'link_to_node' => 1,
          'label_type' => 'none',
          'format' => 'user-s_default',
          'multiple' => array(
            'group' => TRUE,
            'multiple_number' => '',
            'multiple_from' => '',
            'multiple_reversed' => FALSE,
          ),
          'exclude' => 0,
          'id' => 'field_projectlogo_fid',
          'table' => 'node_data_field_projectlogo',
          'field' => 'field_projectlogo_fid',
          'relationship' => 'group_nid',
        ),
      ),
      3 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'title',
          ),
        ),
        'value' => 'Neue Beiträge',
      ),
      4 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'empty',
          ),
        ),
        'value' => 'Keine neuen Beiträge gefunden',
      ),
      5 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'style_options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'summary',
          ),
        ),
        'value' => '',
      ),
      6 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'style_options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'columns',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'field_projectlogo_fid',
          ),
        ),
        'value' => 'group_nid',
      ),
      7 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'style_options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'info',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'field_projectlogo_fid',
          ),
        ),
        'value' => array(
          'separator' => '',
        ),
      ),
      8 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'relationships',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'group_nid',
          ),
        ),
        'value' => array(
          'label' => 'Gruppenbeitrag (Beitrag)',
          'required' => 0,
          'id' => 'group_nid',
          'table' => 'og_ancestry',
          'field' => 'group_nid',
          'relationship' => 'none',
        ),
      ),
      9 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'field_projectlogo_fid',
          ),
        ),
        'value' => array(
          'label' => '',
          'alter' => array(
            'alter_text' => 0,
            'text' => '',
            'make_link' => 0,
            'path' => '',
            'absolute' => 0,
            'link_class' => '',
            'alt' => '',
            'rel' => '',
            'prefix' => '',
            'suffix' => '',
            'target' => '',
            'help' => '',
            'trim' => 0,
            'max_length' => '',
            'word_boundary' => 1,
            'ellipsis' => 1,
            'html' => 0,
            'strip_tags' => 0,
          ),
          'empty' => '',
          'hide_empty' => 1,
          'empty_zero' => 0,
          'hide_alter_empty' => 1,
          'link_to_node' => 1,
          'label_type' => 'none',
          'format' => 'user-s_default',
          'multiple' => array(
            'group' => TRUE,
            'multiple_number' => '',
            'multiple_from' => '',
            'multiple_reversed' => FALSE,
          ),
          'exclude' => 0,
          'id' => 'field_projectlogo_fid',
          'table' => 'node_data_field_projectlogo',
          'field' => 'field_projectlogo_fid',
          'relationship' => 'group_nid',
        ),
      ),
      10 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'style_options',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'summary',
          ),
        ),
        'value' => '',
      ),
      11 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'style_options',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'columns',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'field_projectlogo_fid',
          ),
        ),
        'value' => 'group_nid',
      ),
      12 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'style_options',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'info',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'field_projectlogo_fid',
          ),
        ),
        'value' => array(
          'separator' => '',
        ),
      ),
      13 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'block_1',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'block_description',
          ),
        ),
        'value' => 'Neue Beiträge',
      ),
      14 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'block_2',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'title',
          ),
        ),
        'value' => 'Neueste Dateien',
      ),
      15 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'block_2',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'empty',
          ),
        ),
        'value' => 'Keine neuen Dateien gefunden.',
      ),
      16 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'block_2',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'block_description',
          ),
        ),
        'value' => 'Neueste Dateien',
      ),
      17 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'block_3',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'block_description',
          ),
        ),
        'value' => 'Aktivität des Benutzers',
      ),
    ),
    'deletions' => array(),
  );
  $export['dlr_atrium_activity_listing'] = $features_override;

  $features_override = new stdClass;
  $features_override->disabled = FALSE; /* Edit this to true to make a default features_override disabled initially */
  $features_override->api_version = 1;
  $features_override->name = 'dlr_atrium_administer_dashboards';
  $features_override->description = '';
  $features_override->component_type = 'user_permission';
  $features_override->component_id = 'administer dashboards';
  $features_override->value = array(
    'additions' => array(),
    'deletions' => array(
      0 => array(
        'keys' => array(
          0 => array(
            'type' => 'array',
            'key' => 'roles',
          ),
          1 => array(
            'type' => 'array',
            'key' => 1,
          ),
        ),
      ),
    ),
  );
  $export['dlr_atrium_administer_dashboards'] = $features_override;

  $features_override = new stdClass;
  $features_override->disabled = FALSE; /* Edit this to true to make a default features_override disabled initially */
  $features_override->api_version = 1;
  $features_override->name = 'dlr_atrium_block_users';
  $features_override->description = '';
  $features_override->component_type = 'user_permission';
  $features_override->component_id = 'block users';
  $features_override->value = array(
    'additions' => array(),
    'deletions' => array(
      0 => array(
        'keys' => array(
          0 => array(
            'type' => 'array',
            'key' => 'roles',
          ),
          1 => array(
            'type' => 'array',
            'key' => 1,
          ),
        ),
      ),
    ),
  );
  $export['dlr_atrium_block_users'] = $features_override;

  $features_override = new stdClass;
  $features_override->disabled = FALSE; /* Edit this to true to make a default features_override disabled initially */
  $features_override->api_version = 1;
  $features_override->name = 'dlr_atrium_context_global';
  $features_override->description = 'Overrides block settings on global context';
  $features_override->component_type = 'context';
  $features_override->component_id = 'global';
  $features_override->value = array(
    'additions' => array(
      0 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'reactions',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'block',
          ),
          2 => array(
            'type' => 'array',
            'key' => 'blocks',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'nice_menus-2',
          ),
        ),
        'value' => array(
          'module' => 'nice_menus',
          'delta' => 2,
          'region' => 'header',
          'weight' => 2,
        ),
      ),
      1 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'reactions',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'block',
          ),
          2 => array(
            'type' => 'array',
            'key' => 'blocks',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'boxes-foerderleiste',
          ),
        ),
        'value' => array(
          'module' => 'boxes',
          'delta' => 'foerderleiste',
          'region' => 'footer',
          'weight' => 0,
        ),
      ),
      2 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'reactions',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'block',
          ),
          2 => array(
            'type' => 'array',
            'key' => 'blocks',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'footermap-0',
          ),
        ),
        'value' => array(
          'module' => 'footermap',
          'delta' => 0,
          'region' => 'footer',
          'weight' => 1,
        ),
      ),
      3 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'reactions',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'block',
          ),
          2 => array(
            'type' => 'array',
            'key' => 'blocks',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'atrium-help',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'region',
          ),
        ),
        'value' => 'space_tools',
      ),
      4 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'reactions',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'block',
          ),
          2 => array(
            'type' => 'array',
            'key' => 'blocks',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'atrium-help',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'weight',
          ),
        ),
        'value' => 1,
      ),
      5 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'reactions',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'block',
          ),
          2 => array(
            'type' => 'array',
            'key' => 'blocks',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'atrium-admin_links',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'weight',
          ),
        ),
        'value' => 2,
      ),
    ),
    'deletions' => array(
      0 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'reactions',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'block',
          ),
          2 => array(
            'type' => 'array',
            'key' => 'blocks',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'atrium-search',
          ),
        ),
      ),
      1 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'reactions',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'block',
          ),
          2 => array(
            'type' => 'array',
            'key' => 'blocks',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'xref-create',
          ),
        ),
      ),
      2 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'reactions',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'block',
          ),
          2 => array(
            'type' => 'array',
            'key' => 'blocks',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'spaces_dashboard-editor',
          ),
        ),
      ),
      3 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'reactions',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'block',
          ),
          2 => array(
            'type' => 'array',
            'key' => 'blocks',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'spaces-menu_editor',
          ),
        ),
      ),
    ),
  );
  $export['dlr_atrium_context_global'] = $features_override;

  $features_override = new stdClass;
  $features_override->disabled = FALSE; /* Edit this to true to make a default features_override disabled initially */
  $features_override->api_version = 1;
  $features_override->name = 'dlr_atrium_context_spaces_dashboard_custom';
  $features_override->description = 'Changes to spaces_dashboard-custom-1 context';
  $features_override->component_type = '0';
  $features_override->component_id = 'spaces_dashboard-custom-1';
  $features_override->value = array(
    'additions' => array(
      0 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'reactions',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'block',
          ),
          2 => array(
            'type' => 'array',
            'key' => 'blocks',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'views-activity_listing-block_1',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'weight',
          ),
        ),
        'value' => 0,
      ),
      1 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'reactions',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'block',
          ),
          2 => array(
            'type' => 'array',
            'key' => 'layout',
          ),
        ),
        'value' => 'default',
      ),
    ),
    'deletions' => array(
      0 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'reactions',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'block',
          ),
          2 => array(
            'type' => 'array',
            'key' => 'blocks',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'atrium-welcome_admin',
          ),
        ),
      ),
    ),
  );
  $export['dlr_atrium_context_spaces_dashboard_custom'] = $features_override;

  $features_override = new stdClass;
  $features_override->disabled = FALSE; /* Edit this to true to make a default features_override disabled initially */
  $features_override->api_version = 1;
  $features_override->name = 'dlr_atrium_edit_views_link';
  $features_override->description = 'Edit Views link appears on view for admin users';
  $features_override->component_type = 'variable';
  $features_override->component_id = 'views_no_hover_links';
  $features_override->value = array(
    'additions' => array(
      0 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'value',
          ),
        ),
        'value' => 0,
      ),
    ),
    'deletions' => array(),
  );
  $export['dlr_atrium_edit_views_link'] = $features_override;

  $features_override = new stdClass;
  $features_override->disabled = FALSE; /* Edit this to true to make a default features_override disabled initially */
  $features_override->api_version = 1;
  $features_override->name = 'dlr_atrium_groups_members_list_view';
  $features_override->description = 'View for groups members list';
  $features_override->component_type = 'views';
  $features_override->component_id = 'members_listing';
  $features_override->value = array(
    'additions' => array(
      0 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'filters',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'rid',
          ),
        ),
        'value' => array(
          'operator' => 'not',
          'value' => array(
            3 => '3',
          ),
          'group' => '0',
          'exposed' => FALSE,
          'expose' => array(
            'operator' => FALSE,
            'label' => '',
          ),
          'id' => 'rid',
          'table' => 'users_roles',
          'field' => 'rid',
          'relationship' => 'none',
          'reduce_duplicates' => 0,
        ),
      ),
      1 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'filters',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'rid',
          ),
        ),
        'value' => array(
          'operator' => 'not',
          'value' => array(
            3 => '3',
          ),
          'group' => '0',
          'exposed' => FALSE,
          'expose' => array(
            'operator' => FALSE,
            'label' => '',
          ),
          'id' => 'rid',
          'table' => 'users_roles',
          'field' => 'rid',
          'relationship' => 'none',
          'reduce_duplicates' => 0,
        ),
      ),
      2 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'page_1',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'filters',
          ),
        ),
        'value' => array(
          'status' => array(
            'operator' => '=',
            'value' => 1,
            'group' => '0',
            'exposed' => FALSE,
            'expose' => array(
              'operator' => FALSE,
              'label' => '',
            ),
            'id' => 'status',
            'table' => 'users',
            'field' => 'status',
            'override' => array(
              'button' => 'Override',
            ),
            'relationship' => 'none',
          ),
          'current' => array(
            'operator' => '=',
            'value' => '',
            'group' => '0',
            'exposed' => FALSE,
            'expose' => array(
              'operator' => FALSE,
              'label' => '',
            ),
            'id' => 'current',
            'table' => 'spaces',
            'field' => 'current',
            'relationship' => 'none',
          ),
          'rid' => array(
            'operator' => 'not',
            'value' => array(
              3 => '3',
            ),
            'group' => '0',
            'exposed' => FALSE,
            'expose' => array(
              'operator' => FALSE,
              'label' => '',
            ),
            'id' => 'rid',
            'table' => 'users_roles',
            'field' => 'rid',
            'override' => array(
              'button' => 'Use default',
            ),
            'relationship' => 'none',
            'reduce_duplicates' => 0,
          ),
        ),
      ),
      3 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'page_1',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'defaults',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'filters',
          ),
        ),
        'value' => FALSE,
      ),
      4 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'page_1',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'defaults',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'filters',
          ),
        ),
        'value' => FALSE,
      ),
      5 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'page_1',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'filters',
          ),
        ),
        'value' => array(
          'status' => array(
            'operator' => '=',
            'value' => 1,
            'group' => '0',
            'exposed' => FALSE,
            'expose' => array(
              'operator' => FALSE,
              'label' => '',
            ),
            'id' => 'status',
            'table' => 'users',
            'field' => 'status',
            'override' => array(
              'button' => 'Override',
            ),
            'relationship' => 'none',
          ),
          'current' => array(
            'operator' => '=',
            'value' => '',
            'group' => '0',
            'exposed' => FALSE,
            'expose' => array(
              'operator' => FALSE,
              'label' => '',
            ),
            'id' => 'current',
            'table' => 'spaces',
            'field' => 'current',
            'relationship' => 'none',
          ),
          'rid' => array(
            'operator' => 'not',
            'value' => array(
              3 => '3',
            ),
            'group' => '0',
            'exposed' => FALSE,
            'expose' => array(
              'operator' => FALSE,
              'label' => '',
            ),
            'id' => 'rid',
            'table' => 'users_roles',
            'field' => 'rid',
            'override' => array(
              'button' => 'Use default',
            ),
            'relationship' => 'none',
            'reduce_duplicates' => 0,
          ),
        ),
      ),
      6 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'page_3',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'defaults',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'filters',
          ),
        ),
        'value' => FALSE,
      ),
      7 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'page_3',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'filters',
          ),
        ),
        'value' => array(
          'status' => array(
            'operator' => '=',
            'value' => 1,
            'group' => '0',
            'exposed' => FALSE,
            'expose' => array(
              'operator' => FALSE,
              'label' => '',
            ),
            'id' => 'status',
            'table' => 'users',
            'field' => 'status',
            'override' => array(
              'button' => 'Override',
            ),
            'relationship' => 'none',
          ),
          'current' => array(
            'operator' => '=',
            'value' => '',
            'group' => '0',
            'exposed' => FALSE,
            'expose' => array(
              'operator' => FALSE,
              'label' => '',
            ),
            'id' => 'current',
            'table' => 'spaces',
            'field' => 'current',
            'relationship' => 'none',
          ),
          'rid' => array(
            'operator' => 'not',
            'value' => array(
              3 => '3',
            ),
            'group' => '0',
            'exposed' => FALSE,
            'expose' => array(
              'operator' => FALSE,
              'label' => '',
            ),
            'id' => 'rid',
            'table' => 'users_roles',
            'field' => 'rid',
            'override' => array(
              'button' => 'Use default',
            ),
            'relationship' => 'none',
            'reduce_duplicates' => 0,
          ),
        ),
      ),
      8 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'page_3',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'defaults',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'filters',
          ),
        ),
        'value' => FALSE,
      ),
      9 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'page_3',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'filters',
          ),
        ),
        'value' => array(
          'status' => array(
            'operator' => '=',
            'value' => 1,
            'group' => '0',
            'exposed' => FALSE,
            'expose' => array(
              'operator' => FALSE,
              'label' => '',
            ),
            'id' => 'status',
            'table' => 'users',
            'field' => 'status',
            'override' => array(
              'button' => 'Override',
            ),
            'relationship' => 'none',
          ),
          'current' => array(
            'operator' => '=',
            'value' => '',
            'group' => '0',
            'exposed' => FALSE,
            'expose' => array(
              'operator' => FALSE,
              'label' => '',
            ),
            'id' => 'current',
            'table' => 'spaces',
            'field' => 'current',
            'relationship' => 'none',
          ),
          'rid' => array(
            'operator' => 'not',
            'value' => array(
              3 => '3',
            ),
            'group' => '0',
            'exposed' => FALSE,
            'expose' => array(
              'operator' => FALSE,
              'label' => '',
            ),
            'id' => 'rid',
            'table' => 'users_roles',
            'field' => 'rid',
            'override' => array(
              'button' => 'Use default',
            ),
            'relationship' => 'none',
            'reduce_duplicates' => 0,
          ),
        ),
      ),
    ),
    'deletions' => array(),
  );
  $export['dlr_atrium_groups_members_list_view'] = $features_override;

  $features_override = new stdClass;
  $features_override->disabled = FALSE; /* Edit this to true to make a default features_override disabled initially */
  $features_override->api_version = 1;
  $features_override->name = 'dlr_atrium_groups_side_view';
  $features_override->description = 'Modified My Groups view to categorize groups by node type';
  $features_override->component_type = 'views';
  $features_override->component_id = 'groups_listing';
  $features_override->value = array(
    'additions' => array(
      0 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'type',
          ),
        ),
        'value' => array(
          'label' => '',
          'alter' => array(
            'alter_text' => 0,
            'text' => '',
            'make_link' => 0,
            'path' => '',
            'absolute' => 0,
            'link_class' => '',
            'alt' => '',
            'rel' => '',
            'prefix' => '',
            'suffix' => '',
            'target' => '',
            'help' => '',
            'trim' => 0,
            'max_length' => '',
            'word_boundary' => 1,
            'ellipsis' => 1,
            'html' => 0,
            'strip_tags' => 0,
          ),
          'empty' => '',
          'hide_empty' => 0,
          'empty_zero' => 0,
          'hide_alter_empty' => 1,
          'link_to_node' => 0,
          'machine_name' => 0,
          'exclude' => 1,
          'id' => 'type',
          'table' => 'node',
          'field' => 'type',
          'relationship' => 'none',
        ),
      ),
      1 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'style_options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'grouping',
          ),
        ),
        'value' => 'type',
      ),
      2 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'type',
          ),
        ),
        'value' => array(
          'label' => '',
          'alter' => array(
            'alter_text' => 0,
            'text' => '',
            'make_link' => 0,
            'path' => '',
            'absolute' => 0,
            'link_class' => '',
            'alt' => '',
            'rel' => '',
            'prefix' => '',
            'suffix' => '',
            'target' => '',
            'help' => '',
            'trim' => 0,
            'max_length' => '',
            'word_boundary' => 1,
            'ellipsis' => 1,
            'html' => 0,
            'strip_tags' => 0,
          ),
          'empty' => '',
          'hide_empty' => 0,
          'empty_zero' => 0,
          'hide_alter_empty' => 1,
          'link_to_node' => 0,
          'machine_name' => 0,
          'exclude' => 1,
          'id' => 'type',
          'table' => 'node',
          'field' => 'type',
          'relationship' => 'none',
        ),
      ),
      3 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'style_options',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'grouping',
          ),
        ),
        'value' => 'type',
      ),
    ),
    'deletions' => array(),
  );
  $export['dlr_atrium_groups_side_view'] = $features_override;

  $features_override = new stdClass;
  $features_override->disabled = FALSE; /* Edit this to true to make a default features_override disabled initially */
  $features_override->api_version = 1;
  $features_override->name = 'dlr_atrium_groups_spaces_features_tabs';
  $features_override->description = 'Features menu tabs in private group spaces have been configured to show only info, calendar and members with info as the home pa';
  $features_override->component_type = 'spaces_presets';
  $features_override->component_id = 'atrium_groups_private';
  $features_override->value = array(
    'additions' => array(
      0 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'value',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'variable',
          ),
          2 => array(
            'type' => 'array',
            'key' => 'spaces_features',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'atrium_blog',
          ),
        ),
        'value' => '0',
      ),
      1 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'value',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'variable',
          ),
          2 => array(
            'type' => 'array',
            'key' => 'spaces_features',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'atrium_book',
          ),
        ),
        'value' => '0',
      ),
      2 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'value',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'variable',
          ),
          2 => array(
            'type' => 'array',
            'key' => 'spaces_features',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'atrium_casetracker',
          ),
        ),
        'value' => '0',
      ),
      3 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'value',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'variable',
          ),
          2 => array(
            'type' => 'array',
            'key' => 'spaces_features',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'atrium_shoutbox',
          ),
        ),
        'value' => '0',
      ),
      4 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'value',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'variable',
          ),
          2 => array(
            'type' => 'array',
            'key' => 'spaces_features',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'spaces_dashboard',
          ),
        ),
        'value' => '0',
      ),
      5 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'value',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'variable',
          ),
          2 => array(
            'type' => 'array',
            'key' => 'site_frontpage',
          ),
        ),
        'value' => 'info',
      ),
      6 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'value',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'variable',
          ),
          2 => array(
            'type' => 'array',
            'key' => 'site_frontpage_path',
          ),
        ),
        'value' => 'dashboard',
      ),
    ),
    'deletions' => array(
      0 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'value',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'variable',
          ),
          2 => array(
            'type' => 'array',
            'key' => 'spaces_features',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'atrium_folders',
          ),
        ),
      ),
      1 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'value',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'variable',
          ),
          2 => array(
            'type' => 'array',
            'key' => 'spaces_features',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'spacesoghome',
          ),
        ),
      ),
      2 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'value',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'variable',
          ),
          2 => array(
            'type' => 'array',
            'key' => 'spaces_dashboard_blocks',
          ),
        ),
      ),
    ),
  );
  $export['dlr_atrium_groups_spaces_features_tabs'] = $features_override;

  $features_override = new stdClass;
  $features_override->disabled = FALSE; /* Edit this to true to make a default features_override disabled initially */
  $features_override->api_version = 1;
  $features_override->name = 'dlr_atrium_ogmy';
  $features_override->description = 'adds image to group blocks (user menu and sidebar) and puts them into a raster';
  $features_override->component_type = 'views';
  $features_override->component_id = 'groups_listing';
  $features_override->value = array(
    'additions' => array(
      0 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'field_projectlogo_fid',
          ),
        ),
        'value' => array(
          'label' => '',
          'alter' => array(
            'alter_text' => 0,
            'text' => '',
            'make_link' => 0,
            'path' => '',
            'absolute' => 0,
            'link_class' => '',
            'alt' => '',
            'rel' => '',
            'prefix' => '',
            'suffix' => '',
            'target' => '',
            'help' => '',
            'trim' => 0,
            'max_length' => '',
            'word_boundary' => 1,
            'ellipsis' => 1,
            'html' => 0,
            'strip_tags' => 0,
          ),
          'empty' => '',
          'hide_empty' => 0,
          'empty_zero' => 0,
          'hide_alter_empty' => 1,
          'link_to_node' => 0,
          'label_type' => 'none',
          'format' => 'user-m_linked',
          'multiple' => array(
            'group' => TRUE,
            'multiple_number' => '',
            'multiple_from' => '',
            'multiple_reversed' => FALSE,
          ),
          'exclude' => 0,
          'id' => 'field_projectlogo_fid',
          'table' => 'node_data_field_projectlogo',
          'field' => 'field_projectlogo_fid',
          'relationship' => 'none',
        ),
      ),
      1 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'title',
          ),
        ),
        'value' => 'Meine Gruppen',
      ),
      2 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'empty',
          ),
        ),
        'value' => 'Keine Gruppen gefunden.',
      ),
      3 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'use_more_text',
          ),
        ),
        'value' => 'Mehr...',
      ),
      4 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'field_projectlogo_fid',
          ),
        ),
        'value' => array(
          'label' => '',
          'alter' => array(
            'alter_text' => 0,
            'text' => '',
            'make_link' => 0,
            'path' => '',
            'absolute' => 0,
            'link_class' => '',
            'alt' => '',
            'rel' => '',
            'prefix' => '',
            'suffix' => '',
            'target' => '',
            'help' => '',
            'trim' => 0,
            'max_length' => '',
            'word_boundary' => 1,
            'ellipsis' => 1,
            'html' => 0,
            'strip_tags' => 0,
          ),
          'empty' => '',
          'hide_empty' => 0,
          'empty_zero' => 0,
          'hide_alter_empty' => 1,
          'link_to_node' => 0,
          'label_type' => 'none',
          'format' => 'user-m_linked',
          'multiple' => array(
            'group' => TRUE,
            'multiple_number' => '',
            'multiple_from' => '',
            'multiple_reversed' => FALSE,
          ),
          'exclude' => 0,
          'id' => 'field_projectlogo_fid',
          'table' => 'node_data_field_projectlogo',
          'field' => 'field_projectlogo_fid',
          'relationship' => 'none',
        ),
      ),
      5 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'block_2',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'field_projectlogo_fid',
          ),
        ),
        'value' => array(
          'label' => '',
          'alter' => array(
            'alter_text' => 0,
            'text' => '',
            'make_link' => 0,
            'path' => '',
            'absolute' => 0,
            'link_class' => '',
            'alt' => '',
            'rel' => '',
            'prefix' => '',
            'suffix' => '',
            'target' => '',
            'help' => '',
            'trim' => 0,
            'max_length' => '',
            'word_boundary' => 1,
            'ellipsis' => 1,
            'html' => 0,
            'strip_tags' => 0,
          ),
          'empty' => '',
          'hide_empty' => 0,
          'empty_zero' => 0,
          'hide_alter_empty' => 1,
          'link_to_node' => 0,
          'label_type' => 'none',
          'format' => 'user-m_linked',
          'multiple' => array(
            'group' => TRUE,
            'multiple_number' => '',
            'multiple_from' => '',
            'multiple_reversed' => FALSE,
          ),
          'exclude' => 0,
          'id' => 'field_projectlogo_fid',
          'table' => 'node_data_field_projectlogo',
          'field' => 'field_projectlogo_fid',
          'override' => array(
            'button' => 'Standard verwenden',
          ),
          'relationship' => 'none',
        ),
      ),
      6 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'block_2',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'style_plugin',
          ),
        ),
        'value' => 'grid',
      ),
      7 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'block_2',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'style_options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'grouping',
          ),
        ),
        'value' => '',
      ),
      8 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'block_2',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'style_options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'columns',
          ),
        ),
        'value' => '4',
      ),
      9 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'block_2',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'style_options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'alignment',
          ),
        ),
        'value' => 'horizontal',
      ),
      10 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'block_2',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'style_options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'fill_single_line',
          ),
        ),
        'value' => 1,
      ),
      11 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'block_2',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'style_options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'summary',
          ),
        ),
        'value' => '',
      ),
      12 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'block_2',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'block_description',
          ),
        ),
        'value' => 'Meine Gruppen',
      ),
      13 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'block_2',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'field_projectlogo_fid',
          ),
        ),
        'value' => array(
          'label' => '',
          'alter' => array(
            'alter_text' => 0,
            'text' => '',
            'make_link' => 0,
            'path' => '',
            'absolute' => 0,
            'link_class' => '',
            'alt' => '',
            'rel' => '',
            'prefix' => '',
            'suffix' => '',
            'target' => '',
            'help' => '',
            'trim' => 0,
            'max_length' => '',
            'word_boundary' => 1,
            'ellipsis' => 1,
            'html' => 0,
            'strip_tags' => 0,
          ),
          'empty' => '',
          'hide_empty' => 0,
          'empty_zero' => 0,
          'hide_alter_empty' => 1,
          'link_to_node' => 0,
          'label_type' => 'none',
          'format' => 'user-m_linked',
          'multiple' => array(
            'group' => TRUE,
            'multiple_number' => '',
            'multiple_from' => '',
            'multiple_reversed' => FALSE,
          ),
          'exclude' => 0,
          'id' => 'field_projectlogo_fid',
          'table' => 'node_data_field_projectlogo',
          'field' => 'field_projectlogo_fid',
          'override' => array(
            'button' => 'Standard verwenden',
          ),
          'relationship' => 'none',
        ),
      ),
      14 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'block_2',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'style_plugin',
          ),
        ),
        'value' => 'grid',
      ),
      15 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'block_2',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'style_options',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'grouping',
          ),
        ),
        'value' => '',
      ),
      16 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'block_2',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'style_options',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'columns',
          ),
        ),
        'value' => '4',
      ),
      17 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'block_2',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'style_options',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'alignment',
          ),
        ),
        'value' => 'horizontal',
      ),
      18 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'block_2',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'style_options',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'fill_single_line',
          ),
        ),
        'value' => 1,
      ),
      19 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'block_2',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'style_options',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'summary',
          ),
        ),
        'value' => '',
      ),
      20 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'page_2',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'title',
          ),
        ),
        'value' => 'Verzeichnis',
      ),
      21 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'page_3',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'title',
          ),
        ),
        'value' => 'Archivierte Gruppen',
      ),
      22 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'page_3',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'empty',
          ),
        ),
        'value' => 'Keine archivierten Gruppen gefunden',
      ),
    ),
    'deletions' => array(
      0 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'block_2',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'title',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'alter',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'absolute',
          ),
        ),
      ),
      1 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'block_2',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'title',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'alter',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'rel',
          ),
        ),
      ),
      2 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'block_2',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'title',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'hide_alter_empty',
          ),
        ),
      ),
      3 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'block_2',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'title',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'override',
          ),
        ),
      ),
      4 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'block_2',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'type',
          ),
        ),
      ),
      5 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'block_2',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'style_options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'type',
          ),
        ),
      ),
      6 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'block_2',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'title',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'alter',
          ),
          7 => array(
            'type' => 'array',
            'key' => 'absolute',
          ),
        ),
      ),
      7 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'block_2',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'title',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'alter',
          ),
          7 => array(
            'type' => 'array',
            'key' => 'rel',
          ),
        ),
      ),
      8 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'block_2',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'title',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'hide_alter_empty',
          ),
        ),
      ),
      9 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'block_2',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'title',
          ),
          6 => array(
            'type' => 'array',
            'key' => 'override',
          ),
        ),
      ),
      10 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'block_2',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'type',
          ),
        ),
      ),
      11 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'block_2',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'style_options',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'type',
          ),
        ),
      ),
    ),
  );
  $export['dlr_atrium_ogmy'] = $features_override;

  $features_override = new stdClass;
  $features_override->disabled = FALSE; /* Edit this to true to make a default features_override disabled initially */
  $features_override->api_version = 1;
  $features_override->name = 'dlr_atrium_overrides';
  $features_override->description = 'Changes the source secondary links';
  $features_override->component_type = '0';
  $features_override->component_id = 'menu_secondary_links_source';
  $features_override->value = array(
    'additions' => array(
      0 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'value',
          ),
        ),
        'value' => 'primary-links',
      ),
    ),
    'deletions' => array(),
  );
  $export['dlr_atrium_overrides'] = $features_override;

  $features_override = new stdClass;
  $features_override->disabled = FALSE; /* Edit this to true to make a default features_override disabled initially */
  $features_override->api_version = 1;
  $features_override->name = 'dlr_atrium_perm_create_users';
  $features_override->description = '';
  $features_override->component_type = 'user_permission';
  $features_override->component_id = 'create users';
  $features_override->value = array(
    'additions' => array(),
    'deletions' => array(
      0 => array(
        'keys' => array(
          0 => array(
            'type' => 'array',
            'key' => 'roles',
          ),
          1 => array(
            'type' => 'array',
            'key' => 1,
          ),
        ),
      ),
    ),
  );
  $export['dlr_atrium_perm_create_users'] = $features_override;

  $features_override = new stdClass;
  $features_override->disabled = FALSE; /* Edit this to true to make a default features_override disabled initially */
  $features_override->api_version = 1;
  $features_override->name = 'dlr_atrium_spaces_dashboard_blocks';
  $features_override->description = 'The config options regard blocks available on spaces dashboard pages';
  $features_override->component_type = 'variable';
  $features_override->component_id = 'spaces_dashboard_blocks';
  $features_override->value = array(
    'additions' => array(
      0 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'value',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'devel-2',
          ),
        ),
        'value' => 1,
      ),
    ),
    'deletions' => array(),
  );
  $export['dlr_atrium_spaces_dashboard_blocks'] = $features_override;

  $features_override = new stdClass;
  $features_override->disabled = FALSE; /* Edit this to true to make a default features_override disabled initially */
  $features_override->api_version = 1;
  $features_override->name = 'dlr_atrium_spaces_private';
  $features_override->description = '';
  $features_override->component_type = 'spaces_presets';
  $features_override->component_id = 'atrium_groups_private';
  $features_override->value = array(
    'additions' => array(
      0 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'value',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'variable',
          ),
          2 => array(
            'type' => 'array',
            'key' => 'spaces_features',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'atrium_calendar',
          ),
        ),
        'value' => '1',
      ),
      1 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'value',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'variable',
          ),
          2 => array(
            'type' => 'array',
            'key' => 'spaces_features',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'atrium_folders',
          ),
        ),
        'value' => '1',
      ),
      2 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'value',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'variable',
          ),
          2 => array(
            'type' => 'array',
            'key' => 'spaces_features',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'spacesoghome',
          ),
        ),
        'value' => '1',
      ),
      3 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'value',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'variable',
          ),
          2 => array(
            'type' => 'array',
            'key' => 'site_frontpage',
          ),
        ),
        'value' => 'blog',
      ),
      4 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'value',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'variable',
          ),
          2 => array(
            'type' => 'array',
            'key' => 'site_frontpage_path',
          ),
        ),
        'value' => 'blog',
      ),
      5 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'value',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'variable',
          ),
          2 => array(
            'type' => 'array',
            'key' => 'designkit_image',
          ),
        ),
        'value' => array(
          'logo' => 0,
        ),
      ),
      6 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'value',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'variable',
          ),
          2 => array(
            'type' => 'array',
            'key' => 'spaces_dashboard_blocks',
          ),
        ),
        'value' => array(
          'atrium_calendar-mini' => 1,
          'user-2' => 1,
          'user-3' => 1,
          'views-activity_listing-block_1' => 1,
          'views-activity_listing-block_2' => 1,
          'views-blog_comments-block_1' => 1,
          'views-blog_listing-block_2' => 1,
          'views-calendar_upcoming-block_1' => 1,
          'views-folders-block_1' => 1,
          'views-folders_folders-block_1' => 1,
          'views-groups_listing-block_2' => 1,
          'views-info_listing-block_1' => 1,
        ),
      ),
    ),
    'deletions' => array(
      0 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'value',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'variable',
          ),
          2 => array(
            'type' => 'array',
            'key' => 'spaces_features',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'atrium_book',
          ),
        ),
      ),
      1 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'value',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'variable',
          ),
          2 => array(
            'type' => 'array',
            'key' => 'spaces_features',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'atrium_casetracker',
          ),
        ),
      ),
      2 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'value',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'variable',
          ),
          2 => array(
            'type' => 'array',
            'key' => 'spaces_features',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'atrium_shoutbox',
          ),
        ),
      ),
    ),
  );
  $export['dlr_atrium_spaces_private'] = $features_override;

  $features_override = new stdClass;
  $features_override->disabled = FALSE; /* Edit this to true to make a default features_override disabled initially */
  $features_override->api_version = 1;
  $features_override->name = 'dlr_atrium_spaces_public';
  $features_override->description = '';
  $features_override->component_type = 'spaces_presets';
  $features_override->component_id = 'atrium_groups_public';
  $features_override->value = array(
    'additions' => array(
      0 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'value',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'variable',
          ),
          2 => array(
            'type' => 'array',
            'key' => 'spaces_features',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'atrium_calendar',
          ),
        ),
        'value' => '1',
      ),
      1 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'value',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'variable',
          ),
          2 => array(
            'type' => 'array',
            'key' => 'spaces_features',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'atrium_folders',
          ),
        ),
        'value' => '1',
      ),
      2 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'value',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'variable',
          ),
          2 => array(
            'type' => 'array',
            'key' => 'site_frontpage',
          ),
        ),
        'value' => 'blog',
      ),
      3 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'value',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'variable',
          ),
          2 => array(
            'type' => 'array',
            'key' => 'site_frontpage_path',
          ),
        ),
        'value' => 'blog',
      ),
      4 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'value',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'variable',
          ),
          2 => array(
            'type' => 'array',
            'key' => 'designkit_image',
          ),
        ),
        'value' => array(
          'logo' => 0,
        ),
      ),
    ),
    'deletions' => array(
      0 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'value',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'variable',
          ),
          2 => array(
            'type' => 'array',
            'key' => 'spaces_features',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'atrium_book',
          ),
        ),
      ),
      1 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'value',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'variable',
          ),
          2 => array(
            'type' => 'array',
            'key' => 'spaces_features',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'atrium_casetracker',
          ),
        ),
      ),
      2 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'value',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'variable',
          ),
          2 => array(
            'type' => 'array',
            'key' => 'spaces_features',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'atrium_shoutbox',
          ),
        ),
      ),
    ),
  );
  $export['dlr_atrium_spaces_public'] = $features_override;

  return $export;
}
