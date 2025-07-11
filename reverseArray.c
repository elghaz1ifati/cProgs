#include <stdio.h>

int main(){
    int Array[]={1,2,3,4,5,6,7,8,9,10};
    int *ptr = Array+10-1; //points to the last element of the array
    int i = 0 ;
    while (i<10){
        printf("%d ",*ptr);
        ptr--;  // Move pointer backward
        i++; 
    }
}