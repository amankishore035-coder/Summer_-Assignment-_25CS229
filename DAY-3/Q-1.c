#include <stdio.h>
int main(){
    int c=0;
    int n1;
    for (int i=2;i<n1;i++){
        if (n1%i==0){
            c++;
        }
        else{
            continue;
        }
        if (c==0){
            printf("The given number is prime number");
        }
        else{
            printf("The given number is not prime");
        }
}
    return 0;
}