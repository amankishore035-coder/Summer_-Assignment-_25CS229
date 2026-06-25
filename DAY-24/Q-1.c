#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[200];
    int i, j, len1, len2, found = 0;
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    len1 = strlen(str1);
    len2 = strlen(str2);

    if(len1 != len2) {
        printf("Not a rotation (different lengths).\n");
        return 0;
    }
    strcpy(temp, str1);
    strcat(temp, str1);
    if(strstr(temp, str2) != NULL) {
        found = 1;
    }

    if(found)
        printf("Yes, the string is a rotation.\n");
    else
        printf("No, the string is not a rotation.\n");

    return 0;
}
