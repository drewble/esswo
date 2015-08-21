<?php
/**
 * @file
 * ew_base.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function ew_base_default_rules_configuration() {
  $items = array();
  $items['rules_delete_scheduled_unflag_as_new'] = entity_import('rules_config', '{ "rules_delete_scheduled_unflag_as_new" : {
      "LABEL" : "Delete Scheduled Unflag as New",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "rules_scheduler" ],
      "ON" : { "node_delete" : [] },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "node" ],
            "type" : "node",
            "bundle" : { "value" : { "artist_worship_leader" : "artist_worship_leader", "song" : "song" } }
          }
        }
      ],
      "DO" : [
        { "schedule_delete" : {
            "component" : "rules_unflag_song_leader",
            "task" : "node-[node:nid]-unflag-as-new"
          }
        }
      ]
    }
  }');
  $items['rules_new_flag'] = entity_import('rules_config', '{ "rules_new_flag" : {
      "LABEL" : "New Flag",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "flag", "rules_scheduler" ],
      "ON" : { "node_insert" : [], "node_update" : [] },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "node" ],
            "type" : "node",
            "bundle" : { "value" : { "artist_worship_leader" : "artist_worship_leader", "song" : "song" } }
          }
        }
      ],
      "DO" : [
        { "flag_flagnode" : {
            "flag" : "new",
            "node" : [ "node" ],
            "flagging_user" : [ "node:author" ],
            "permission_check" : "1"
          }
        },
        { "schedule" : {
            "component" : "rules_unflag_song_leader",
            "date" : "+60 days",
            "identifier" : "node-[node:nid]-unflag-as-new",
            "param_node" : [ "node" ]
          }
        }
      ]
    }
  }');
  $items['rules_redirect_to_user_page_on_user_save'] = entity_import('rules_config', '{ "rules_redirect_to_user_page_on_user_save" : {
      "LABEL" : "Redirect to User Page on User Save",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_update" : [] },
      "DO" : [ { "redirect" : { "url" : "user" } } ]
    }
  }');
  $items['rules_unflag_song_leader'] = entity_import('rules_config', '{ "rules_unflag_song_leader" : {
      "LABEL" : "Unflag Song\\/Leader",
      "PLUGIN" : "action set",
      "OWNER" : "rules",
      "REQUIRES" : [ "flag" ],
      "USES VARIABLES" : { "node" : { "label" : "node", "type" : "node" } },
      "ACTION SET" : [
        { "flag_unflagnode" : {
            "flag" : "new",
            "node" : [ "node" ],
            "flagging_user" : [ "node:author" ],
            "permission_check" : "1"
          }
        }
      ]
    }
  }');
  return $items;
}
