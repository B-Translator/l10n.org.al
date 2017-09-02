#!/bin/bash
### Install the features for this site.

cd $(dirname $0)

### drupal features for layout and content
drush -y dis bcl_content bcl_layout
drush -y en  bcl_sq_content bcl_sq_layout

### setup twitter
cat <<'EOF' > /usr/local/bin/twitter.sh
#!/bin/bash
t='/usr/local/bin/t'
base_url=https://l10n.org.al
tweet=$(curl -k $base_url/btr/tweet)
mention=$( ( $t followings ; $t followers ) | uniq | sort -R | tail -1)
$t update "$tweet @$mention"
EOF
chmod +x /usr/local/bin/twitter.sh

cat <<EOF > /etc/cron.d/twitter
0 4 * * *  twitter  /usr/local/bin/twitter.sh > /dev/null 2>&1
### uncomment this line only for debugging
#*/5 * * * *  twitter  /usr/local/bin/twitter.sh
EOF

### fortune
apt-get -y install fortune
cp -a fortunes/* /usr/share/games/fortunes/

### setup fortune
cat <<'EOF' > /usr/local/bin/fortune.sh
#!/bin/bash
fortune='/usr/games/fortune'
t='/usr/local/bin/t'
tweet=$($fortune -s -n 140 25% english 75% shqip)
$t update "$tweet"
EOF
chmod +x /usr/local/bin/fortune.sh

cat <<EOF > /etc/cron.d/fortune
0 */5 * * *  twitter  /usr/local/bin/fortune.sh > /dev/null 2>&1
### uncomment this line only for debugging
#*/5 * * * *  twitter  /usr/local/bin/fortune.sh
EOF

