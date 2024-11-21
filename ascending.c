#include <stdio.h>

int main() {
    int arr[10],min_idx,temp,i,j;  

   
    printf("Enter 10 elements:\n");
    for (int i = 0; i < 10; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    
    for (int i = 0; i < 9; i++) {
        min_idx = i;

        for(int j=i+1; j<10; j++){
            if(arr[j]< arr[min_idx]){
                min_idx = j;
            }

        }
            if(min_idx !=i){
                temp = arr[i];
                arr[i]= arr[min_idx];
                arr[min_idx] = temp;
            }
    }

    printf("sorted array in ascending order: \n");
    for(i=0;i<10;i++){
        printf("%d", arr[i]);
    }
    return 0;
}
