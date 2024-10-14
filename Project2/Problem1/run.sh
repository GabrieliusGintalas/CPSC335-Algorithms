#!/bin/bash

# Delete the existing 'main' executable if it exists
if [ -f "main" ]; then
    rm main
    echo "Deleted main."
fi

# Compile the code
echo "Compiling..."
g++ main.cpp algo1.cpp -o main

# Check if compilation succeeded
if [ $? -eq 0 ]; then
    echo "Compilation successful. Running the program..."
    # Execute the compiled program
    ./main
else
    echo "Compilation failed."
fi