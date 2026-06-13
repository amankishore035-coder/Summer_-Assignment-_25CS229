#include <stdio.h>
int half_pyramid(int n1){
    for(int i=0;i<n1;i++){
        printf("*");
    }
    printf("\n");
    for(int j=0;j<n1-2;j++){
        printf("*");
        for (int i=0;i<n1-2;i++){
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
    for(int i=0;i<n1;i++){
        printf("*");
    }
}
int main(){
    int n;
    printf("Enter the number of rows for half pyramid: ");
    scanf("%d",&n);
    half_pyramid(n);
    return 0;
}