// Create an expression that swaps the values of two variables x and y without using a temporary variable.
#include <stdio.h>
int main() {
    int x, y;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);    
    x = x + y;
    y = x - y;
    x = x - y;
    printf("After swapping: x = %d, y = %d\n", x, y);
    return 0;
}