#include <stdio.h>
int main() {
    int n,r;
    int product=1;
    printf("product of the digit is:");
    scanf("%d",&n);
    if(n==0){
        product=0;
    } else {
        while(n>0){
            r=n%10;
            n=n/10;
            product*=r;
        }
    }
    printf("Product of the digits is: %d\n", product);
    return 0;
}