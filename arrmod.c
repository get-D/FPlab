#include <stdio.h>

int main() {
    int arr[5];  
    
    
    printf("Enter 5 elements for the array:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    
    printf("\nOriginal array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    
    arr[0] = 10;  
    arr[2] = 20;  
    arr[4] = 30;  
    
    
    printf("\nModified array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}