#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if(argc < 3){
        printf("Usage: r_fract [numerator] [denominator]\n");
        return(EXIT_FAILURE);
    }
    
    int num = atoi(argv[1]);
    int denom = atoi(argv[2]);

    for(int i = 2; i <= num; i++){
        if(num % i == 0 && denom % i == 0){
            num = num / i;
            denom = denom / i;
            i = 2;
        }
    }

    printf("%d/%d\n", num, denom);

    return 0;
}
