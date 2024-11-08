#!/bin/bash
gcc main.c -o main -lm

for filename in ./testcases/*.in; do
    echo "Running Case $(basename "$filename" .in) ..."
    
    # Store expected output file
    file1="./testcases/$(basename "$filename" .in).out"

    # Check if the expected output file exists
    if [ ! -e "$file1" ]; then
        echo "File '$file1' does not exist."
        exit 1
    fi

    # Run the program and compare its output directly with the expected output
    if diff --strip-trailing-cr "$file1" <(./main < "$filename") > /dev/null; then
        echo "Results: Matched, Good job!"
    else
        echo "Results: NOT Matched, Please check your code!"
        # Compare and show differences using side-by-side view
        diff -y --strip-trailing-cr "$file1" <(./main < "$filename")
    fi
    echo ""
done
