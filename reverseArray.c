#include <stdio.h>

int main(){
    int Array[]={1,2,3,4,5,6,7,8,9,10};
    int *ptr = Array-1;
    int i = 0 ;
    while (i<10){
        printf("%d ",*ptr);
        ptr--;  // Move pointer backward
        i++; 
    }
}