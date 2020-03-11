
grep -v '#' /etc/passwd |grep -oE '^[a-z]{1,100}' |sed 1~2d |rev| sort -r |sed -n "$FT_LINE1","$FT_LINE2"p |tr '\n' ',' | sed 's!,$!.\n!'
