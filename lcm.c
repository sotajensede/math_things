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
    if(argc < 2)
        printf("Usage: %s [NUMBERS]\n", argv[0]);
    else {
        /* int args, potential solution, lcm multiplier */
        int args[argc - 1], lcm, x;

        /* set lcm and first int to first argument */
        //args[0] = lcm = (int)(argv[1][0] - '0');
        args[0] = lcm = atoi(argv[1]);

        /* TEST 
        printf("args[0]: %d\nlcm: %d\nargv[1] %d\n\n", args[0], lcm, atoi(argv[1]));
        */

        /* add rest of arguments to int array
           set lcm to highest argument */
        for(int i = 2; i < argc; ++i) {
            //args[i-1] = (int)(argv[i][0] - '0');
            args[i-1] = atoi(argv[i]);
            if(args[i-1] > lcm) lcm = args[i-1];
        }
        
        /* TEST 
        printf("Operands:\n");
        for(int i = 0; i < argc - 1; ++i)
            printf(" %d\n", args[i]);
        printf("\nLCM:");*/

        x = 1; /* multiply by x until lcm is found*/
        for(int i = 0; i < argc - 1;) {
            if((lcm * x) % args[i] == 0) ++i;
            else { ++x; i = 0;}
        }

        lcm = lcm * x;
        printf("%d\n", lcm);
    }
}
