#include <stdio.h>

int main() {
    int mat1[2][2], mat2[2][2], diff[2][2];
    int i, j;

    
    printf("Enter elements of first 2x2 matrix:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

   
    printf("Enter elements of second 2x2 matrix:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            diff[i][j] = mat1[i][j] - mat2[i][j];
        }
    }

   
    printf("Difference of matrices is:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d ", diff[i][j]);
        }
        printf("\n");
    }

    return 0;
}
