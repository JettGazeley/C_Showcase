#include <stdio.h>

void main(int argc, char *argv[]) {
    for (int i = 1; i < argc; i++) {
        fputs(argv[i], stdout);
        printf(" ");
    }
    printf("\n");
}