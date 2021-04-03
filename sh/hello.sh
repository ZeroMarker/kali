#!/bin/bash


name="sophomore"
age=12


echo ${name}
echo ${#name}


echo "Hello, ${name} Shell World!\n"	# single quote without format


let age=${age}+1
echo ${age}

mcd (){
	mkdir -p "$1"
	cd "$1"		
}			

	# first argument 
	# $0 self file name 	$? last return value
	# $! last process PID	$$ shell pid	$# args
	
	
	
	# source hello.sh	
	# mcd test


