#include <stdio.h>

int main(){
    
    float a;
    printf("Enter a number :");
    scanf("%f",&a);
    if (a<0){
        printf("%.2f Negatif \n",a);
    }else if (a>0){
        printf("%.2f Posetif \n",a);
    }
    else{
        printf("%.2f Null \n",a);

    }
    return 0;
}