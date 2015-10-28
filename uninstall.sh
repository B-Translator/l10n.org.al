#!/bin/bash
### Uninstall the features for this site.

cd $(dirname $0)

drush -y dis bcl_sq_content bcl_sq_layout
drush -y en  bcl_content bcl_layout

