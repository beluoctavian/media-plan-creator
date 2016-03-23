<?php
/**
 * @file
 * zeddigital_feature.features.inc
 */

/**
 * Implements hook_default_Workflow().
 */
function zeddigital_feature_default_Workflow() {
  $workflows = array();

  // Exported workflow: 'media_plan_workflow'
  $workflows['media_plan_workflow'] = entity_import('Workflow', '{
    "name" : "media_plan_workflow",
    "tab_roles" : { "-1" : "-1", "6" : "6", "3" : "3", "4" : "4" },
    "options" : {
      "name_as_title" : "1",
      "options" : "radios",
      "schedule" : "0",
      "schedule_timezone" : "0",
      "comment_log_node" : "0",
      "comment_log_tab" : "0",
      "watchdog_log" : "1",
      "history_tab_show" : 1
    },
    "states" : {
      "1" : {"sid":"1","wid":"1","weight":"-50","sysid":"1","state":"(creation)","status":"1","name":"(creation)"},
      "2" : {"sid":"2","wid":"1","weight":"-20","sysid":"0","state":"In progress","status":"1","name":"in_progress"},
      "3" : {"sid":"3","wid":"1","weight":"-19","sysid":"0","state":"Done (send to GDE api)","status":"1","name":"done"}
    },
    "transitions" : {
      "1" : {"tid":"1","sid":"1","target_sid":"2","roles":{"-1":-1,"3":3,"4":4},"wid":"1","name":"1_2","label":"","rdf_mapping":[]},
      "2" : {"tid":"2","sid":"2","target_sid":"2","roles":{"-1":-1,"6":6,"3":3,"4":4},"wid":"1","name":"2_2","label":"","rdf_mapping":[]},
      "3" : {"tid":"3","sid":"2","target_sid":"3","roles":{"-1":-1,"6":6,"3":3},"wid":"1","name":"2_3","label":"","rdf_mapping":[]},
      "5" : {"tid":"5","sid":"3","target_sid":"2","roles":{"6":6,"3":3},"wid":"1","name":"3_2","label":"","rdf_mapping":[]},
      "4" : {"tid":"4","sid":"3","target_sid":"3","roles":{"-1":-1,"6":6,"3":3,"4":4},"wid":"1","name":"3_3","label":"","rdf_mapping":[]}
    },
    "label" : "Media plan workflow",
    "typeMap" : [ "media_plan" ],
    "rdf_mapping" : [],
    "wid_original" : "1",
    "system_roles" : {
      "-1" : "(author)",
      "1" : "anonymous user",
      "2" : "authenticated user",
      "6" : "super administrator",
      "3" : "administrator",
      "4" : "content manager",
      "5" : "supplier"
    }
  }');

  return $workflows;
}

/**
 * Implements hook_views_api().
 */
function zeddigital_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function zeddigital_feature_node_info() {
  $items = array(
    'media_plan' => array(
      'name' => t('Media Plan'),
      'base' => 'node_content',
      'description' => t('Used to create media plans for different brands.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
