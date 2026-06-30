#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 50
#define NAME_LENGTH 50


char names[MAX_STUDENTS][NAME_LENGTH];
int rollNumbers[MAX_STUDENTS];
float marks[MAX_STUDENTS];
int count = 0; 


void addStudent();
void displayStudents();
void searchStudent();
void updateStudent();
void deleteStudent();

int main() {
    int choice;

    do {
        printf("\n--- Student Management System ---\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch(choice) {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: searchStudent(); break;
            case 4: updateStudent(); break;
            case 5: deleteStudent(); break;
            case 6: printf("Exiting program...\n"); break;
            default: printf("Invalid choice! Try again.\n");
        }
    } while(choice != 6);

    return 0;
}


void addStudent() {
    if (count < MAX_STUDENTS) {
        printf("Enter student name: ");
        fgets(names[count], NAME_LENGTH, stdin);
        names[count][strcspn(names[count], "\n")] = '\0';

        printf("Enter roll number: ");
        scanf("%d", &rollNumbers[count]);
        getchar();

        printf("Enter marks: ");
        scanf("%f", &marks[count]);
        getchar();

        count++;
        printf("Student added successfully!\n");
    } else {
        printf("Record full! Cannot add more students.\n");
    }
}


void displayStudents() {
    if (count == 0) {
        printf("No students added yet.\n");
        return;
    }
    printf("\n--- Student List ---\n");
    for (int i = 0; i < count; i++) {
        printf("Roll No: %d, Name: %s, Marks: %.2f\n", rollNumbers[i], names[i], marks[i]);
    }
}


void searchStudent() {
    int roll;
    printf("Enter roll number to search: ");
    scanf("%d", &roll);
    getchar();

    for (int i = 0; i < count; i++) {
        if (rollNumbers[i] == roll) {
            printf("Found! Roll No: %d, Name: %s, Marks: %.2f\n", rollNumbers[i], names[i], marks[i]);
            return;
        }
    }
    printf("Student not found.\n");
}


void updateStudent() {
    int roll;
    printf("Enter roll number to update: ");
    scanf("%d", &roll);
    getchar();

    for (int i = 0; i < count; i++) {
        if (rollNumbers[i] == roll) {
            printf("Enter new name: ");
            fgets(names[i], NAME_LENGTH, stdin);
            names[i][strcspn(names[i], "\n")] = '\0';

            printf("Enter new marks: ");
            scanf("%f", &marks[i]);
            getchar();

            printf("Student updated successfully!\n");
            return;
        }
    }
    printf("Student not found.\n");
}
void deleteStudent() {
    int roll;
    printf("Enter roll number to delete: ");
    scanf("%d", &roll);
    getchar();

    for (int i = 0; i < count; i++) {
        if (rollNumbers[i] == roll) {
           
            for (int j = i; j < count - 1; j++) {
                strcpy(names[j], names[j+1]);
                rollNumbers[j] = rollNumbers[j+1];
                marks[j] = marks[j+1];
            }
            count--;
            printf("Student deleted successfully!\n");
            return;
        }
    }
    printf("Student not found.\n");
}
