// Create an expression that swaps the values of three variables x, y, and z in a cyclic order (i.e., x becomes y, y becomes z, and z becomes x).
#include <stdio.h>
int main() {
    int x, y, z, temp;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);
    printf("Enter the value of z: ");
    scanf("%d", &z);
    temp = x;
    x = y;
    y = z;
    z = temp;
    printf("After cyclic swapping: x = %d, y = %d, z = %d\n", x, y, z);
    return 0;
}