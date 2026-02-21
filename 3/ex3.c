#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    for (int j = 2; j * j <= 168 + 1; j++){
        if (j % 2 == 0 && 
            168 % j == 0 &&
            168 / j >= j &&
        (168 / j) % 2 == 0)
        {
            int m = (j + 168 / j) / 2;
            printf("%d\n", m * m - 268);
        }
    }
    return EXIT_SUCCESS;
}