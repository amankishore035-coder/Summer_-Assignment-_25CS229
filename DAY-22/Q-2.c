#include <stdio.h>

int main() {
    char str[200];
    int i, words = 0;
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin); 

    for(i = 0; str[i] != '\0'; i++) {

        if(str[i] == ' ' || str[i] == '\n') {
            words++;
        }
    }
    printf("Number of words = %d\n", words);

    return 0;
}
