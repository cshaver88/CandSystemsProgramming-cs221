#!/bin/sh

# Implement a shell script named Q3.sh that uses a loop 
# to output the average gross sales of the top-n ranked 
# (in terms of gross sales) films in each of the four 
# film categories (R. PG-13, PG, G). The rank n is given 
# as a command line argument. For example:
#    > sh Q3.sh 5
# Average gross of the top 5 ranked films in G category is:  335.846
# Average gross of the top 5 ranked films in R category is:  283.781
# Average gross of the top 5 ranked films in PG category is:  429.21
# Average gross of the top 5 ranked films in PG-13 category is:  555.686

# Run your program on the following test cases:
# >sh Q3.sh 1 
# >sh Q3.sh 5
# >sh Q3.sh 10
# >sh Q3.sh 15
# >sh Q3.sh 20


for file in G.txt R.txt PG.txt PG-13.txt 
do
	awk -F"|" '{print $3}' < $file | sort -r -n | head -n $1 | awk 'BEGIN {index1=0; total1=0;} {total1+=$1; index1++;} END{print "Average gross for the top '$1' ranked films in the '$file' category is: " total1/index1;}'

done






































