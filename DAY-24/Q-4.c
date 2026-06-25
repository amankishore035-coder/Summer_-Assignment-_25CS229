#include <stdio.h>

int main() {
    char str[100], result[100];
    int i, j, k, found;

    printf("Enter a string: ");
    scanf("%s", str);

    k = 0;

  
    for(i = 0; str[i] != '\0'; i++) {
        found = 0;
        for(j = 0; j < k; j++) {
            if(result[j] == str[i]) {
                found = 1;
                break;
            }
        }
        if(!found) {
            result[k] = str[i];
            k++;
        }
    }

    result[k] = '\0';

  
    printf("String without duplicate characters: %s\n", result);

    return 0;
}
