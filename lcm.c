/*
 *
 * Jesse Deaton
 *
 * Be free of petty math problems:
 * use this to find the least common
 * multiple of a set of numbers.
 *
 * April, 2015
 *
 */

#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[])
{
    if(argc < 2){
        printf("Usage: %s [NUMBERS]\n", argv[0]);
        return EXIT_FAILURE;
    }

    int args[argc - 1], lcm, x;

    args[0] = lcm = atoi(argv[1]);

    for(int i = 2; i < argc; ++i) {
        args[i-1] = atoi(argv[i]);
        if(args[i-1] > lcm) lcm = args[i-1];
    }

    x = 1;
    for(int i = 0; i < argc - 1;) {
        if((lcm * x) % args[i] == 0) ++i;
        else { ++x; i = 0;}
    }

    lcm = lcm * x;
    printf("%d\n", lcm);
}
