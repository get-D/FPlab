#include <stdio.h>

int main() {
    int n;

    int arr[10];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int pc = 0;
    int nc = 0;

    for (int i = 0; i < n; i++) {
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
