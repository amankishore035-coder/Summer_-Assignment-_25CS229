#include <stdio.h>
#include <string.h>

#define MAX_EMPLOYEES 50   
#define NAME_LENGTH 50     

int main() {
    char names[MAX_EMPLOYEES][NAME_LENGTH]; 
    int ids[MAX_EMPLOYEES];                
    float salaries[MAX_EMPLOYEES];        
    int count = 0;                         
    int choice;

    do {
        printf("\n--- Mini Employee Management System ---\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        if (choice == 1) {
            if (count < MAX_EMPLOYEES) {
                printf("Enter employee name: ");
                fgets(names[count], NAME_LENGTH, stdin);
                names[count][strcspn(names[count], "\n")] = '\0'; 

                printf("Enter employee ID: ");
                scanf("%d", &ids[count]);
                getchar();

                printf("Enter employee salary: ");
                scanf("%f", &salaries[count]);
                getchar();

                count++;
                printf("Employee added successfully!\n");
            } else {
                printf("Employee list full! Cannot add more employees.\n");
            }
        } else if (choice == 2) {
            printf("\n--- Employee List ---\n");
            for (int i = 0; i < count; i++) {
                printf("ID: %d, Name: %s, Salary: %.2f\n", ids[i], names[i], salaries[i]);
            }
            if (count == 0) {
                printf("No employees added yet.\n");
            }
        } else if (choice == 3) {
            printf("Exiting program...\n");
        } else {
            printf("Invalid choice! Try again.\n");
        }

    } while (choice != 3);

    return 0;
}
