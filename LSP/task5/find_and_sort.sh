#!/bin/bash


if [ "$#" -ne 2 ]; then
    echo "Usage: $0 <word_to_find> <filename>"
    exit 1
fi


word=$1
file=$2

grep "$word" "$file" | sort

