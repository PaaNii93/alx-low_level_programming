#!/bin/bash

# Compile all .c files into object files
if gcc -Wall -pedantic -Werror -Wextra -c *.c; then
    echo "Compilation successful"
else
    echo "Compilation failed"
    exit 1  # Exit the script with an error code
fi

# Create a static library
if ar rc liball.a *.o; then
    echo "Static library created: liball.a"
else
    echo "Static library creation failed"
    exit 1  # Exit the script with an error code
fi

# Add an index to the library (optional but recommended for performance)
if ranlib liball.a; then
    echo "Index added to the library"
else
    echo "Indexing failed (not critical)"
fi

# Cleanup: Remove temporary object files
rm -f *.o
