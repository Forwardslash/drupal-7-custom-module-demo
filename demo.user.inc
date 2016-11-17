<?php

/**
* Page callback for the 'user/%/demo tab'.
*/
function demo_user_tab($wildcard) {
  if (is_numeric($wildcard) && ($account = user_load($wildcard))) {
    return array(
    '#type' => 'markup',
    '#markup' => t("%username is cool.", array('%username' => $account->name)),
    );
  }
  else {
    return drupal_not_found();
  }
}
