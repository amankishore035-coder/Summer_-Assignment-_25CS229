#include <stdio.h>
int main() {
    int n,r;
    int sum=0;
    printf("enter the number to find its sum of digits:");
    scanf("%d",&n);
    while(n>0){
        r=n%10;
        n=n/10;
        sum+=r;

    }
    printf("Sum of digits of the number is: %d\n", sum);
    return 0;
}