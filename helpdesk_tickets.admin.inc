<?php

function helpdesk_tickets_admin_menu_block_page() {
  $item = menu_get_item();
  if ($content = system_admin_menu_block($item)) {
    return theme('admin_block_content', array('content' => $content));
  }
  else {
    return t('You can not access any administrative items.');
  }
}




?>