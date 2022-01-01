# C_Showcase
These files were taken from a previous assignmnet in my System Level Programming course to showcase programming abilities in C.
## echo.c
For this question, I was tasked with creating a C program named echo.c that emulates the basic functionality of the Linux command echo (ignore the options that you can pass to the real echo command). In other words, the program prints the command-line arguments to standard output separated with a single space. There is no trailing space at the end of the output (unless it is part of a quoted string). There is a newline character after the output, even if there are no command line arguments to print.

## math_demo.c
In this file, I needed to create a C program named math_demo.c that requires one or two numeric values provided via commmand-line arguments. If one command-line argument is given, then the program computes the normal probability density function evaluated at the argument. If two command-line arguments are given, then the program computes the sum of the two arguments.

If the wrong number of command-line arguments are given, then the program prints an error message to standard error and exits with an exit status of 1. Use the function fprintf to print a string to standard error.

## encrypt.c
Here I wrote a program named encrypt.c that encrypts a string (provided as a command-line argument) and prints the encrypted string.

The program requires two command-line arguments: An integer value and a string (the message). If the wrong number of command-line arguments are given, then the program prints an error message to standard error and exits with an exit status of 1.

"n" characterizes the cipher alphabet used to encrypt the message. It is equal to the number of positions to shift the regular alphabet ABCDEFGHIJKLMNOPQRSTUVWXYZZ to the left.
