#include <stdio.h>

int main (){

    printf("This program change the value of two integers \n");

    int x, y, z;

    printf("Enter X value : ");
    scanf("%d",&x);

    printf("Enter Y value : ");
    scanf("%d",&y);

    z = x;
    x = y;
    y = z;
    
    printf("X = %d \n",x);
    printf("Y = %d \n",y);

    return 0 ;
}
