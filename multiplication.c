#include <stdio.h>

void printMultiplicationTable() {
    printf("Multiplication Table (1-10):\n\n");
    
    int i = 1;
    while (i <= 10) {    // Outer loop for rows
        int j = 1;
        while (j <= 10) { // Inner loop for columns
            printf("%d x %d = %d ", i, j, i * j);
            j++;
            printf("\n");
        }
        printf("\n");    // New line after each row
        i++;
    }
}

int main() {
    printMultiplicationTable();
    return 0;
}
