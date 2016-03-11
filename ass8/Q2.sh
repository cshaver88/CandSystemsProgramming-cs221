#!/bin/sh

# Implement a shell script named Q2.sh that takes two optional 
# command line arguments (-y year -s studio) and one mandatary 
# argument -f filename. If no optional command line argument 
# is provided, the script outputs the average gross sales of 
# the given film category. If one or both of the optional command 
# line arguments are provided, the average gross is calculated for 
# the given studio and/or within the given era. Run your program 
# on the following test cases:
#    > sh Q2.sh -f R.txt
# Outputs the average gross sales of all films in R category.

#    > sh Q2.sh -s MGM -f PG.txt
# Outputs the average gross sales of films made by MGM in PG category.

# 	> sh Q2.sh -y 1980 -f G.txt
# Outputs the average gross sales of films made during 1980s in G category.

# 	> sh Q2.sh -s WB -y 1960 -f PG-13.txt
# Outputs the average gross sales of films made by WB during 1960s in PG-13 category.

# 	> sh Q2.sh
# Outputs an error message reporting no input file name is provided.

while getopts "f:y:s:" opt; do
	case $opt in
		f ) filename=$OPTARG;;
		y ) year=$OPTARG;;
		s ) studio=$OPTARG;;
		*) echo "Invalid option: -‐‐ $OPTARG"
		   exit 1;;
	esac
done

if(!(test -z $filename)); then
	if(!(test -z $year)); then
		if(!(test -z $studio)); then
			era=`expr $year + 9`
			grep $studio $filename | awk 'BEGIN {FS="|"; i=0; count=0;} {if ($4 >= '$year' && $4 <= '$era'){ count+=$3; i+=1;}} END {print count/i}'
		else
			exp=${year:0:3}
			newexp="|"$exp'[0-9]'
			grep $newexp $filename | awk 'BEGIN {FS="|"; i=0; count=0;} { count+=$3; i+=1;} END {print count/i}'
		fi
	else
		if(!(test -z $studio)); then
			grep $studio $filename | awk 'BEGIN {FS="|"; i=0; count=0;} { count+=$3; i+=1;} END {print count/i}'
		fi
	fi
	if((test -z $studio) && (test -z $year)); then
		awk 'BEGIN {FS="|"; i=0; count=0;} { count+=$3; i+=1;} END {print count/i}' < $filename
	fi
else
	echo " You have not entered a filename, this is required.";
	exit 1;
fi











































