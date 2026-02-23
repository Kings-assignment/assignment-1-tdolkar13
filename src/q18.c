// Write a C expression that calculates the sum of the squares of three different numbers.
#include <stdio.h>
int main() {    
    float a, b, c, sum_of_squares;
    printf("Enter three different numbers: ");
    scanf("%f %f %f", &a, &b, &c);
    sum_of_squares = (a * a) + (b * b) + (c * c);
    printf("The sum of the squares of %.2f, %.2f, and %.2f is: %.2f\n", a, b, c, sum_of_squares);
    return 0;
}
