#!/bin/bash
echo "Hello, shell world!\n"
name="sophomore"
readonly name
echo ${name}
echo ${#name}

age=12
echo ${age}
let age=${age}+1
echo ${age}

