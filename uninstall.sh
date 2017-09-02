#!/bin/bash
### Uninstall the features for this site.

cd $(dirname $0)

drush -y dis bcl_sq_content bcl_sq_layout
drush -y en  bcl_content bcl_layout

rm -f /usr/local/bin/twitter.sh /etc/cron.d/twitter
rm -f /usr/local/bin/fortune.sh /etc/cron.d/fortune
rm -rf /usr/share/games/fortunes/

apt-get -y uninstall fortune
