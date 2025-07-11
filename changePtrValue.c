#include <stdio.h>

float NewValue(float *ptr){
    *ptr = 20;
}

int main (){

    float num = 10;
    printf("Num before = %2.f \na",num);
    NewValue(&num);
    printf("Num after = %2.f",num);
    return 0;

}