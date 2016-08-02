ldapsearch -Q "cn=*bon*" | grep "dn" | wc -l | cut -c 8-
