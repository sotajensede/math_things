/*
 *
 * Jesse Deaton
 *
 * Be free of petty math problems:
 * use this to reduce fractions.
 *
 * September, 2015
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if(argc < 3){
        printf("Usage: %s [numerator] [denominator]\n", argv[0]);
        return EXIT_FAILURE;
    }
    
    int num = atoi(argv[1]);
    int denom = atoi(argv[2]);

    for(int i = 2; i <= num; i++)
        if(num % i == 0 && denom % i == 0){
            num = num / i;
            denom = denom / i;
            i = 2;
        }

    printf(" %d\n---\n %d\n", num, denom);

    return 0;
}
