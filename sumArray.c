
#include <stdio.h>

int main (){
    int Array[]={10,33,40,59};
    int *ptr = Array;
    int sum =0 ;

    int i=1;
    while (i<=4){
        sum += *ptr;
        ptr++;
        i ++;
    }
    printf("%d",sum);
    return 0 ;
}
