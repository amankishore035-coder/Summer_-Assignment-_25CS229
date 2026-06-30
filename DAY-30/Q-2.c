#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 50      
#define TITLE_LENGTH 50   
#define AUTHOR_LENGTH 50  

int main() {
    char titles[MAX_BOOKS][TITLE_LENGTH];   
    char authors[MAX_BOOKS][AUTHOR_LENGTH]; 
    int count = 0;                          
    int choice;

    do {
        printf("\n--- Mini Library System ---\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); 

        if (choice == 1) {
            if (count < MAX_BOOKS) {
                printf("Enter book title: ");
                fgets(titles[count], TITLE_LENGTH, stdin);
                titles[count][strcspn(titles[count], "\n")] = '\0'; 

                printf("Enter author name: ");
                fgets(authors[count], AUTHOR_LENGTH, stdin);
                authors[count][strcspn(authors[count], "\n")] = '\0';

                count++;
                printf("Book added successfully!\n");
            } else {
                printf("Library full! Cannot add more books.\n");
            }
        } else if (choice == 2) {
            printf("\n--- Book List ---\n");
            for (int i = 0; i < count; i++) {
                printf("Title: %s, Author: %s\n", titles[i], authors[i]);
            }
            if (count == 0) {
                printf("No books added yet.\n");
            }
        } else if (choice == 3) {
            printf("Exiting program...\n");
        } else {
            printf("Invalid choice! Try again.\n");
        }

    } while (choice != 3);

    return 0;
}
