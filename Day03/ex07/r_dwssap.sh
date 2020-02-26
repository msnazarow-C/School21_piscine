cut -d : -s  -f1 "/etc/passwd" | awk "NR%2 ==0" |rev|sort -r|head -n $FT_LINE2| tail -n "$(($FT_LINE2 - $FT_LINE1 + 1))"| tr '\n' ','| sed "s/,/, /g"|rev|sed "s/,/./" |rev
