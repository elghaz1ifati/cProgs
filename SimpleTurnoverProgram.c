#include <stdio.h>

float Turnover(int ps, float p) {
    return ps * p; 
}

int main() {
    int products_sale;
    float price, turnover;

    printf("How many products did you sell? ");
    scanf("%d", &products_sale);
    
    printf("What is the price of one product? ");
    scanf("%f", &price);
    
    turnover = Turnover(products_sale, price); 
    printf("Your turnover is: %.2f \n", turnover);

    return 0; 
}