#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char title[50];
    char author[50];
    int year;
};

int main() {
    struct Book library[50]; 
    int count = 0;            
    int choice, i, id;

    do {
        printf("\n--- Library Management System ---\n");
        printf("1. Add Book\n");
        printf("2. Display All Books\n");
        printf("3. Search Book by ID\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                if(count < 50) {
                    printf("Enter Book ID: ");
                    scanf("%d", &library[count].id);
                    printf("Enter Title: ");
                    scanf("%s", library[count].title);
                    printf("Enter Author: ");
                    scanf("%s", library[count].author);
                    printf("Enter Year of Publication: ");
                    scanf("%d", &library[count].year);
                    count++;
                    printf("Book added successfully!\n");
                } else {
                    printf("Library is full! Cannot add more books.\n");
                }
                break;

            case 2:
                printf("\n--- Book List ---\n");
                for(i = 0; i < count; i++) {
                    printf("ID: %d | Title: %s | Author: %s | Year: %d\n",
                           library[i].id, library[i].title,
                           library[i].author, library[i].year);
                }
                break;

            case 3:
                printf("Enter Book ID to search: ");
                scanf("%d", &id);
                int found = 0;
                for(i = 0; i < count; i++) {
                    if(library[i].id == id) {
                        printf("Book Found!\n");
                        printf("ID: %d | Title: %s | Author: %s | Year: %d\n",
                               library[i].id, library[i].title,
                               library[i].author, library[i].year);
                        found = 1;
                        break;
                    }
                }
                if(!found) {
                    printf("No book found with ID %d\n", id);
                }
                break;

            case 4:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }
    } while(choice != 4);

    return 0;
}
