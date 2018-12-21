# helpdesk_tickets
This is a custom Drupal 7 module for Part 3 of our Team Project.

**Note that the VM described below no longer exists, and this information is left here for archival purposes.**

## Updating code on the VM
First, use this guide to get set up: https://gist.github.com/Nilpo/8ed5e44be00d6cf21f22. You first need to set up passwordless SSH access. Note that the steps of generating the SSH key must be done on your **local** machine. After getting that set up, skip to the part about adding the remote, navigate to your local repository in a terminal like Git Bash and type `git remote add live ssh://team24@203.95.212.51/home/team24/helpdesk_tickets.git`. Then you can type `git push live master` to update changes on the Drupal website.

So when you want to update code on the Drupal website, go through these steps:
1. Push to the online GitHub repository (this one).
2. Push to live.
3. (optional) If you have made changes to the `.install` file, you will need to reinstall the module. Log into the VM and type `drush-reinstall helpdesk_tickets` and the module will be reinstalled.

## Debugging
If you want to debug the code, just make changes to the files on the VM. Devel is installed on the website which gives us some extra debugging functions. See this website: http://ratatosk.net/drupal/tutorials/debugging-drupal.html. The one you'll want to remember is probably `dpm()`.

## Drupal API
The Drupal API is here: https://api.drupal.org/api/drupal/7.x. Make sure that **Drupal 7.x** is selected at the top as that is the version we are using.

## Other links
Youtube tutorial playlist: https://www.youtube.com/playlist?list=PL-Ve2ZZ1kZNRJVY5cpaLaJoJdB8AiLA96&pbjreload=10  
List of hooks: https://api.drupal.org/api/drupal/includes%21module.inc/group/hooks/7.x  
Form API Reference: https://api.drupal.org/api/drupal/developer%21topics%21forms_api_reference.html/7.x
