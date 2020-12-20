#!/bin/sh
awk -F: '{print $1}' /etc/passwd| awk "NR % 2 == 0"| rev | sort -rn | awk "FNR>=$FT_LINE1 && FNR<=$FT_LINE2"|sed 's/$/,/'| tr '\n' ' '| sed 's/, *$/\./'
