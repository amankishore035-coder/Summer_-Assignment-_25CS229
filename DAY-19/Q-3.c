#include <stdio.h>

int main() {
    int mat[2][2], transpose[2][2];
    int i, j;

  
    printf("Enter elements of 2x2 matrix:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

  
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            transpose[j][i] = mat[i][j];
        }
    }

  
    printf("Transpose of matrix is:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
