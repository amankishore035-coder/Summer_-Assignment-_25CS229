#include <stdio.h>
#include <string.h>

int main() {
    char str[200], words[50][50], temp[50];
    int i = 0, j = 0, k = 0, count = 0;

    
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);   


    while(str[i] != '\0') {
        if(str[i] != ' ' && str[i] != '\n') {
            words[count][j++] = str[i];
        } else {
            words[count][j] = '\0'; 
            count++;
            j = 0;
        }
        i++;
    }

  
    for(i = 0; i < count - 1; i++) {
        for(j = i + 1; j < count; j++) {
            if(strlen(words[i]) > strlen(words[j])) {
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }
    printf("\nWords sorted by length:\n");
    for(i = 0; i < count; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}
