#include <stdio.h>

int main() {
    int arr1[5], arr2[5], interArr[5];
    int i, j, k = 0;
    printf("Enter 5 elements for first array:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter 5 elements for second array:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr2[i]);
    }
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            if(arr1[i] == arr2[j]) {
                int found = 0;
                for(int m = 0; m < k; m++) {
                    if(interArr[m] == arr1[i]) {
                        found = 1;
                        break;
                    }
                }
                if(!found) {
                    interArr[k++] = arr1[i];
                }
            }
        }
    }
    printf("Intersection of arrays is:\n");
    for(i = 0; i < k; i++) {
        printf("%d ", interArr[i]);
    }

    return 0;
}
