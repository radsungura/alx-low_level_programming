0. gcc -E $CFILE -o c : runs a C file through the preprocessor and save the result into another file.
1. gcc -c $CFILE : Write a script that compiles a C file but does not link.
2. gcc $CFILE -S : Write a script that generates the assembly code of a C code and save it in an output file.
