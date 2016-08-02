cat /etc/passwd | grep -v "#" | awk 'NR%2==0' | rev | cut -d ":" -f7 | sort -rf | sed -n "$FT_LINE1, $FT_LINE2 p" | cat -e | tr '$' ',' | tr '\n' ' ' | sed "s/, $/./" | tr -d '\n'
