#include <stdio.h>

int
main(int argc, char *argv[])
{
    int *x;
    *x = 1;

    fprintf(stdout, "x is %p\n", x);
}