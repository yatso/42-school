ldapsearch -LLL -S -cn "uid=z*" cn | grep -v "dn" | grep -v "^$"
