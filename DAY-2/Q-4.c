#include <stdio.h>
int reverse_no(int n1){
    int r;
    int rev=0;
    while (n1>0){
        r=n1%10;
        n1=n1/10;
        rev=rev*10+r;
    }
    return rev;
}
int main(){
    int n,r;
    int rev=0;
    printf("enter the number to check wheather it is palindrome number or not: ");
    scanf("%d",&n);
    rev=reverse_no(n);  
    
    if (rev==n){
        printf("The given number is palindrome");
    }
    else{
        printf("The given number is not palindrome");
    }
    return 0;}