
##TITLE OF MOVIE | STUDIO NAME | $$$ | YEAR

#1)	Gone with the Wind|MGM|1582.0094|1939
awk -F"|" '{print $3 " " $1 " " $2 " " $4}' < alltime.txt | sort -n | tail -1

#2)	The Bells of St. Mary's RKO 1945
awk -F"|" '{print $3 " " $1 " " $2 " " $4}' < R.txt | sort -r -n | head -50 | tail -1

#3)  the 70's
# awk -f awkcommands.awk < alltime.txt

#4) disney studio 
awk -f awkcommands.awk < alltime.txt

#5) #The best option would be to produce a PG-13 film
awk -F"|" '{print $3}' < R.txt | sort -r -n | head -5 | awk 'BEGIN {index1=0; total1=0;} {total1+=$1; index1++;} END{print "# 5 --- R.txt: " total1;}'
awk -F"|" '{print $3}' < G.txt | sort -r -n | head -5 | awk 'BEGIN {index1=0; total1=0;} {total1+=$1; index1++;} END{print "# 5 --- G.txt: " total1;}'
awk -F"|" '{print $3}' < PG.txt | sort -r -n | head -5 | awk 'BEGIN {index1=0; total1=0;} {total1+=$1; index1++;} END{print "# 5 --- PG.txt: " total1;}'
awk -F"|" '{print $3}' < PG-13.txt | sort -r -n | head -5 | awk 'BEGIN {index1=0; total1=0;} {total1+=$1; index1++;} END{print "# 5 --- PG-13.txt: " total1;}'

