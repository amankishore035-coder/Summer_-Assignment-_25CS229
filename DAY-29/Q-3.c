#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], result[200];
    int choice;

    do {
        printf("\n--- Menu Driven String Operations ---\n");
        printf("1. Find Length of String\n");
        printf("2. Copy String\n");
        printf("3. Concatenate Strings\n");
        printf("4. Compare Strings\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter a string: ");
                scanf("%s", str1);
                printf("Length of string: %lu\n", strlen(str1));
                break;

            case 2:
                printf("Enter a string to copy: ");
                scanf("%s", str1);
                strcpy(result, str1);
                printf("Copied string: %s\n", result);
                break;

            case 3:
                printf("Enter first string: ");
                scanf("%s", str1);
                printf("Enter second string: ");
                scanf("%s", str2);
                strcpy(result, str1);
                strcat(result, str2);
                printf("Concatenated string: %s\n", result);
                break;

            case 4:
                printf("Enter first string: ");
                scanf("%s", str1);
                printf("Enter second string: ");
                scanf("%s", str2);
                if(strcmp(str1, str2) == 0)
                    printf("Strings are equal.\n");
                else
                    printf("Strings are not equal.\n");
                break;

            case 5:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }
    } while(choice != 5);

    return 0;
}
