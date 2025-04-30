#!/bin/bash


print_line_count() {
    if [[ -f "$1" ]]; then
        lines=$(wc -l < "$1")
        echo "$1: $lines lines"
    else
        echo "$1: File not found."
    fi
}

files=("file1.txt" "file2.txt" "file3.txt")


for file in "${files[@]}"; do
    print_line_count "$file"
done

