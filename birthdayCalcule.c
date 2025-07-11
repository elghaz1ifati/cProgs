#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int birthCalculate(int *birth) {
    return localtime(&(time_t){time(NULL)})->tm_year + 1900 - *birth; /*don't get it yet*/
}
int main() {
    
    int birth, age;
    
    printf("What is your birth year? ");
    scanf("%d", &birth);
    
    age = birthCalculate(&birth);
    
    printf("You are %d years old!\n", age);
    
    return 0;
}