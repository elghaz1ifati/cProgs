#include <stdio.h>

void Perimeter_Area(float *p, float *a, float length, float width) {
    *p = 2 * (length + width);  // Calculate perimeter and store it at p's address
    *a = length * width;        // Calculate area and store it at a's address
}

int main() {
    float len, wid, perimeter, area;
    printf("The length = ");
    scanf("%f", &len);
    printf("The width = ");
    scanf("%f", &wid);
    
    Perimeter_Area(&perimeter, &area, len, wid);  // Pass addresses of perimeter and area
    
    printf("Perimeter = %.2f\n", perimeter);
    printf("Area = %.2f\n", area);
    
    return 0;
}
