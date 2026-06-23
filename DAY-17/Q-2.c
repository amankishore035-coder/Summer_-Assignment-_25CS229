#include <stdio.h>

int main() {
    int arr1[5], arr2[5], unionArr[10];
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
        unionArr[k++] = arr1[i];
    }
    for(i = 0; i < 5; i++) {
        int found = 0;
        for(j = 0; j < k; j++) {
            if(arr2[i] == unionArr[j]) {
                found = 1;
                break;
            }
        }
        if(!found) {
            unionArr[k++] = arr2[i];
        }
    }
    printf("Union of arrays is:\n");
    for(i = 0; i < k; i++) {
        printf("%d ", unionArr[i]);
    }

    return 0;
}
