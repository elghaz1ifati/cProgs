#include <stdio.h>

int main (){
    int Array []={0,1,2,3,4,5,6,7,8,9,10};
    int *a = Array;
    int i = 1 ;
    while (i<=10){
        printf("%d \n", a[i]);
        i++;
    }
    return 0;
}