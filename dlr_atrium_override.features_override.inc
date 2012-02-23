<?php

/**
 * Implementation of hook_default_features_overrides().
 */
function dlr_atrium_override_default_features_overrides() {
  $export = array();

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
  $features_override->description = 'Changes to global context';
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
            'key' => 'atrium-user_links',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'weight',
          ),
        ),
        'value' => 2,
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
            'key' => 'atrium-help',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'region',
          ),
        ),
        'value' => 'space_tools',
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
            'key' => 'atrium-help',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'weight',
          ),
        ),
        'value' => 1,
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
