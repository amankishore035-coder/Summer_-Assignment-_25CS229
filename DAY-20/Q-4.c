#include <stdio.h>

int main() {
    int mat[3][3], i, j, sum;

   
    printf("Enter elements of 3x3 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for(j = 0; j < 3; j++) {
        sum = 0;
        for(i = 0; i < 3; i++) {
            sum += mat[i][j];
        }
        printf("Sum of column %d = %d\n", j+1, sum);
    }

    return 0;
}
