#!/bin/bash

# Get a list of all .c files in the current directory
c_files=$(ls *.c 2>/dev/null)

if [ -z "$c_files" ]; then
  echo "No .c files found in the current directory."
  exit 1
fi

# Compile each .c file into .o object files
for file in $c_files; do
  gcc -c "$file"
done

# Create the static library liball.a from the object files
ar rcs liball.a *.o

# Clean up the object files
rm -f *.o

echo "Static library liball.a created successfully."
