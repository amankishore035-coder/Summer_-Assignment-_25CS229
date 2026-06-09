#include <stdio.h>
int print_fibonacci(int n){
    int a=0,b=1,c;
    printf("fibnacci series: ");
     for (int i=3;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    printf("The %d term of fibonacci series is: %d",n,c);
}
int main(){
    int n;
    printf("Enter number of terms in fibonacci series: ");
    scanf("%d",&n);
    if (n==1){
        printf("The fibonacci series is: 0");}
    else if(n==2){
        printf("The fibonacci series is: 0 1");
        }
    else{
        print_fibonacci(n);

    }
    return 0;}