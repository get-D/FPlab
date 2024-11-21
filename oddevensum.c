#include <stdio.h>

int main() {
    
    int even_sum = 0, odd_sum = 0;

    
    
    int arr[10];  

   
    printf("Enter 10 elements:\n");
    for (int i = 0; i < 10; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    
    for (int i = 0; i < 10; i++) {
        if (arr[i] % 2 == 0) {
            even_sum += arr[i];  
        } else {
            odd_sum += arr[i];   
        }
    }

    
    printf("\nSum of even numbers: %d\n", even_sum);
    printf("Sum of odd numbers: %d\n", odd_sum);
    
    return 0;
}