cut -d : -s  -f1 "/etc/passwd" | sed 1d |rev|sort -r|head -n $FT_LINE2| tail -n "$(($FT_LINE2 - $FT_LINE1 + 1))"| tr '\n' ', '
