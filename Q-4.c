#include <stdio.h>
int main(){
    int n,arr[100];
    printf("Enter the size of array: ");
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        printf("Enter the element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    int c=0;
    int val;

    for (int j=0;j<n;j++){
        c=0;
        for (int i=0;i<n;i++){
            if (arr[j]==arr[i]&& i!=j){
                c++;
                val=arr[j];
            }
     
        }
    
        if(c>0){
            printf("the number %d is dupliicated",val);
        }
    return 0;
}