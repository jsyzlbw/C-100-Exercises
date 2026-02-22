#include <stdio.h>
#include <stdlib.h>

int main(void){
    int x, y ,z, temp;
    printf("Enter three integers: ");
    scanf("%d%d%d", &x, &y, &z);

    if (x > y){
        temp = x;
        x = y;
        y = temp;
    }
    if (x > z){
        temp = x;
        x = z;
        z = temp;
    }
    if (y > z){
        temp = y;
        y = z;
        z = temp;
    }

    printf("From small to big: %d %d %d\n", x, y, z);
    return EXIT_SUCCESS;
}