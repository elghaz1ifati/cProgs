#include <stdio.h>
#include <math.h>

float numPower(float n1, float n2){
    return pow(n1,n2);
}

int main (){
    float num1, num2 ,p;
    printf("Enter a number :");
    scanf("%f",&num1);
    printf("Enter a 2nd number :");
    scanf("%f",&num2);
    p = numPower(num1,num2);
    printf("Result = %.2f\n",p);
    return 0;

}
/*to run code execute on Terminal :
1 gcc powNumber.c -o powNumber -lm
2 ./powNumber*/