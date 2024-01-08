#!/bin/bash

# Test case 1: Run the program no arguments
echo "Test Case 1: ./main"
./main
echo

# Test case 2: Run the program with a non-existent file as the first argument
echo "Test Case 2: ./main notFound \"hello\" \"hey\""
./main notFound "hello" "hey"
echo

touch empty
# Test case 3: Run the program with "empty" as the first argument
echo "Test Case 3: ./main empty \"hello\" \"hey\""
./main empty "hello" "hey"
echo 

touch infile
echo "hello world" > infile
echo "hello Codamers" >> infile
echo "hello Naji" >> infile

# Test case 4: Run the program with infile, "hello", and "hey" as arguments
echo "Test Case 4: ./main "infile" \"hello\" \"hey\""
./main infile "hello" "hey"
echo
echo "**original**"
cat infile 
echo
echo "replaced with |hey| "
echo
cat infile.replace
echo