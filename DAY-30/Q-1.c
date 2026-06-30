#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 50   
#define NAME_LENGTH 50   

int main() {
    char names[MAX_STUDENTS][NAME_LENGTH];  
    int rollNumbers[MAX_STUDENTS];         
    int count = 0;                         
    int choice;

    do {
        printf("\n--- Student Record System ---\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); 

        if (choice == 1) {
            if (count < MAX_STUDENTS) {
                printf("Enter student name: ");
                fgets(names[count], NAME_LENGTH, stdin); 

                printf("Enter roll number: ");
                scanf("%d", &rollNumbers[count]);
                getchar();

                count++;
                printf("Student added successfully!\n");
            } else {
                printf("Record full! Cannot add more students.\n");
            }
        } else if (choice == 2) {
            printf("\n--- Student List ---\n");
            for (int i = 0; i < count; i++) {
                printf("Roll No: %d, Name: %s\n", rollNumbers[i], names[i]);
            }
            if (count == 0) {
                printf("No students added yet.\n");
            }
        } else if (choice == 3) {
            printf("Exiting program...\n");
        } else {
            printf("Invalid choice! Try again.\n");
        }

    } while (choice != 3);

    return 0;
}
