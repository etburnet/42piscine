#!/bin/sh
cat /etc/passwd | awk -F':' '{print $1}' | sed -n '1~2p' | rev | sort -dr | sed -n "${FT_LINE1},${FT_LINE2}p" | sed -z 's/\n/, /g' | sed 's/..$/./'
