#include <stdio.h>


void calculatesum(int x, int y) {
    int sum = x + y;
    printf("The sum of x + y is: %d\n", sum);
}

int main() {
    int x, y;
    printf("Enter 2 numbers: ");
    
    scanf("%d %d", &x, &y);
    
    calculatesum(x, y);
    return 0;
}
