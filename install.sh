#!/bin/bash
### Install the features for this site.

cd $(dirname $0)

drush -y dis bcl_content bcl_layout
drush -y en  bcl_sq_content bcl_sq_layout

