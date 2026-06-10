#include <stdio.h>

int main() {
    int n, i, largest = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i++) {
        while(n % i == 0) {
            largest = i;
            n = n / i;
        }
    }

    printf("Largest Prime Factor = %d\n", largest);

    return 0;
}