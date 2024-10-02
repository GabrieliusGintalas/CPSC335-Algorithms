#!/bin/bash

# Compile the code
g++ main.cpp left-to-right.cpp -o main

# Check if compilation succeeded
if [ $? -eq 0 ]; then
    # Execute the compiled program
    ./main
else
    echo "Compilation failed."
fi
