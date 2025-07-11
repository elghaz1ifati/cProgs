
#include <stdio.h>

int main (){
    float num = 20.02;
    float *ptr = &num ;

    printf("Number = %.2f \n",num);
    printf("Number = %.2f \n",*ptr);
    printf("Memory address = %p \n",&num);
    printf("Memory address = %p \n",ptr);

    printf("\n");
    *ptr = 2004.02;
    
    printf("New number = %.2f \n",num);
    printf("New number = %.2f \n",*ptr);
    printf("Memory address = %p \n",&num);
    printf("Memory address = %p \n",ptr);

    return 0;
}