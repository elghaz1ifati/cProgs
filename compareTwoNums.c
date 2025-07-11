#include <stdio.h>

int main (){
    
    float a,b ;
    printf("Number 1 : ");
    scanf("%f",&a);
    printf("Number 2 : ");
    scanf("%f",&b);
    if(a>b){
        printf("%.2f is the max \n",a);
    } 
    else{
        printf("%.2f is the max \n",b);
    }
}