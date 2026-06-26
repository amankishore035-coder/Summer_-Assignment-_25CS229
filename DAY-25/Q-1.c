#include <stdio.h>

int main() {
    int arr1[5], arr2[5], merged[10];
    int i = 0, j = 0, k = 0;
    printf("Enter 5 elements for first sorted array:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter 5 elements for second sorted array:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr2[i]);
    }

    i = 0; j = 0; k = 0;
    while(i < 5 && j < 5) {
        if(arr1[i] < arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }
    while(i < 5) {
        merged[k++] = arr1[i++];
    }
    while(j < 5) {
        merged[k++] = arr2[j++];
    }
    printf("Merged sorted array:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}
