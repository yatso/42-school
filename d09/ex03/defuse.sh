touch -A -000001 -a bomb.txt
stat bomb.txt | cut -d' ' -f 9- | cut -d ' ' -f -4 | tr -d "\""