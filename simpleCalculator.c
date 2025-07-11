#include <stdio.h>


int main (){
    float num1, num2, sum, sub, mult, div;
    printf("This mini program can calculate the sum, subtraction, multiplication and division of two numbers given by user5 \n");
    printf("Number 1 : ");
    scanf("%f",&num1);
    printf("Number 2 : ");
    scanf("%f",&num2);
    sum = num1+num2;
    sub = num1-num2;
    mult = num1*num2;
    div = num1/num2;
    printf("%.2f + %.2f = %.2f \n",num1,num2,sum);
    printf("%.2f - %.2f = %.2f \n",num1,num2,sub);
    printf("%.2f x %.2f = %.2f \n",num1,num2,mult);
    printf("%.2f / %.2f = %.2f \n",num1,num2,div);
    return 0;

}
