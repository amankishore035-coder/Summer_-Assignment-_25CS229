#include <stdio.h>

int main() {
    int mat[3][3], i, j;
    int primarySum = 0, secondarySum = 0;

   
    printf("Enter elements of 3x3 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

   
    for(i = 0; i < 3; i++) {
        primarySum += mat[i][i];             
        secondarySum += mat[i][3 - i - 1];    
    }

   
    printf("Sum of primary diagonal = %d\n", primarySum);
    printf("Sum of secondary diagonal = %d\n", secondarySum);

    return 0;
}
