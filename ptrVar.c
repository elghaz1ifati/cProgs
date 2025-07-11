#include <stdio.h>

int main (){
    int var = 20 ;
    int *ptr = &var ;

    printf("Value of var = %d \n", var); //20
    printf("Memory address of var = %p \n",&var); //memory address
    printf("Value of var = %d \n",*ptr); //var
    printf("Memory address of var = %p \n",ptr); //memory address
    
    printf("I will change the value of var \n");

    *ptr = 02; //change the value of var 
    printf("Value of var = %d \n", var);
    printf("Memory address of var = %p \n",&var);
    printf("Value of var = %d \n",*ptr);
    printf("Memory address of var = %p \n",ptr);

    return 0;
}