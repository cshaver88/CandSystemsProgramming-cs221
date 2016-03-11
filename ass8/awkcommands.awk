BEGIN{FS="|"; count1=0; count2=0;}

#3

{
	if ($4 >= 1970 || $4 <= 1979){
		count1+=$3;
	}
	else if($4 >= 1980 || $4 <= 1989){
		count2+=$3;
	}
}

END{

	if(count1 > count2){
		print "# 3 = The 70s were better.";
	}
	else{
		print "# 3 = The 80s were better.";
	}
}


BEGIN{FS="|"; countDIS=0; countUNI=0; countMGM=0; countCOL=0; countFOX=0; countUA=0; countWB=0; countAVCO=0;}

# Dis. 282.674 + 576.9137 + 612.1636 + 782.3521 + 421.3166 = 24210134 ----
# Uni. 334.0801 = 3340801
# MGM 339.3249 + 971.9806 + 421.8445 + 438.2473 = 21713973
# Col. 313.5089 + 338.7023 + 433.6532  = 8038644
# Fox 552.468 + 1115.1124 + 526.0465 = 16964057
# UA 281.1282 + 585.684 + 519.129 = 3916095
# WB 469.8 = 4698
# AVCO 670.0395 = 6700395


#4

{
	if ($4 >= 1960 && $4 <= 1969){
		if($2 == "Dis."){
			countDIS+=$3;
		}
		if($2 == "Uni."){
			countUNI+=$3;
		}
		if($2 == "MGM"){
			countMGM+=$3;
		}
		if($2 == "Col."){
			countCOL+=$3;
		}
		if($2 == "Fox"){
			countFOX+=$3;
		}
		if($2 == "UA"){
			countUA+=$3;
		}
		if($2 == "WB"){
			countWB+=$3;
		}
		if($2 == "AVCO"){
			countAVCO+=$3;
		}
	}
}

END{
	if(countDIS > countUNI && countDIS > countMGM && countDIS > countCOL && countDIS > countFOX && countDIS > countUA && countDIS > countWB && countDIS > countAVCO){
		print "# 4 --- The Disney Studio did best.";
	}
	if(countUNI > countDIS && countUNI > countMGM && countUNI > countCOL && countUNI > countFOX && countUNI > countUA && countUNI > countWB && countUNI > countAVCO){
		print "# 4 --- The Universal Studio did best.";
	}
	if(countMGM > countUNI && countMGM > countDIS && countMGM > countCOL && countMGM > countFOX && countMGM > countUA && countMGM > countWB && countMGM > countAVCO){
		print "# 4 --- The MGM Studio did best.";
	}
	if(countCOL > countUNI && countCOL > countMGM && countCOL > countDIS && countCOL > countFOX && countCOL > countUA && countCOL > countWB && countCOL > countAVCO){
		print "# 4 --- The Colombia Studio did best.";
	}
	if(countFOX > countUNI && countFOX > countMGM && countFOX > countCOL && countFOX > countDIS && countFOX > countUA && countFOX > countWB && countFOX > countAVCO){
		print "# 4 --- The Fox Studio did best.";
	}
	if(countUA > countUNI && countUA > countMGM && countUA > countCOL && countUA > countFOX && countUA > countDIS && countUA > countWB && countUA > countAVCO){
		print "# 4 --- The UA Studio did best.";
	}
	if(countWB > countUNI && countWB > countMGM && countWB > countCOL && countWB > countFOX && countWB > countUA && countWB > countDIS && countWB > countAVCO){
		print "# 4 --- The WB Studio did best.";
	}
	if(countAVCO > countUNI && countAVCO > countMGM && countAVCO > countCOL && countAVCO > countFOX && countAVCO > countUA && countAVCO > countWB && countAVCO > countDIS){
		print "# 4 --- The AVCO Studio did best.";
	}
}











