#!/bin/bash


echo -n "Field sum: Water + Gas + Electtricty + Phones = "
awk -F "," '{
	if(FNR == 1){
		next;
	}
	
	Water=$2;
	Gas=$3;
	Electricity=$4;
	Phones=$5;

	fields_sum=Water + Gas + Electtricty + Phones;

	total +=fields_sum;

} END { print total; }' data.txt