#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    char department[30];
    float salary;
};

int main() {
    struct Employee employees[50]; 
    int count = 0;                 
    int choice, i, id;

    do {
        printf("\n--- Employee Management System ---\n");
        printf("1. Add Employee\n");
        printf("2. Display All Employees\n");
        printf("3. Search Employee by ID\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                if(count < 50) {
                    printf("Enter Employee ID: ");
                    scanf("%d", &employees[count].id);
                    printf("Enter Name: ");
                    scanf("%s", employees[count].name);
                    printf("Enter Department: ");
                    scanf("%s", employees[count].department);
                    printf("Enter Salary: ");
                    scanf("%f", &employees[count].salary);
                    count++;
                    printf("Employee added successfully!\n");
                } else {
                    printf("Record full! Cannot add more employees.\n");
                }
                break;

            case 2:
                printf("\n--- Employee List ---\n");
                for(i = 0; i < count; i++) {
                    printf("ID: %d | Name: %s | Department: %s | Salary: %.2f\n",
                           employees[i].id, employees[i].name,
                           employees[i].department, employees[i].salary);
                }
                break;

            case 3:
                printf("Enter Employee ID to search: ");
                scanf("%d", &id);
                int found = 0;
                for(i = 0; i < count; i++) {
                    if(employees[i].id == id) {
                        printf("Record Found!\n");
                        printf("ID: %d | Name: %s | Department: %s | Salary: %.2f\n",
                               employees[i].id, employees[i].name,
                               employees[i].department, employees[i].salary);
                        found = 1;
                        break;
                    }
                }
                if(!found) {
                    printf("No employee found with ID %d\n", id);
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
