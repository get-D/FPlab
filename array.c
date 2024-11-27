#include <stdio.h>

int main() {
    

    int arr[10];
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    int pc = 0;
    int nc = 0;

    for (int i = 0; i < 10; i++) {
        if (arr[i] > 0) {
            pc++;
        } else if (arr[i] < 0) {
            nc++;
        }
    }

    printf("Number of positive elements: %d\n", pc);
    printf("Number of negative elements: %d\n", nc);

    return 0;
}
