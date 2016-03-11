#!/bin/sh/
#name studio money year




if(!(test -z $1)); then
	if($1 == "500m"); then
		grep $1 $2 'BEGIN{FS="|"}{print"Name: %s, Money: %s, ", $1, $3}'
	fi
	if($1 == "b"); then
		grep $1 $2 'BEGIN{FS="|"}{print"Name: %s, Money: %s, ", $1, $3}'
	fi
	if($1 == "alltime.txt"); then
		awk 'BEGIN{FS="|"}{print "%s", $1}' > alltime.txt
	fi
fi