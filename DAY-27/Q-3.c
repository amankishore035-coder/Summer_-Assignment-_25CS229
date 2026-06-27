#include <stdio.h>
#include <string.h>

struct Salary {
    int emp_id;
    char name[50];
    float basic_salary;
    float hra;   // House Rent Allowance
    float da;    // Dearness Allowance
    float gross_salary;
};

int main() {
    struct Salary employees[50];  
    int count = 0;                
    int choice, i, id;

    do {
        printf("\n--- Salary Management System ---\n");
        printf("1. Add Employee Salary Record\n");
        printf("2. Display All Salary Records\n");
        printf("3. Search Salary Record by Employee ID\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                if(count < 50) {
                    printf("Enter Employee ID: ");
                    scanf("%d", &employees[count].emp_id);
                    printf("Enter Name: ");
                    scanf("%s", employees[count].name);
                    printf("Enter Basic Salary: ");
                    scanf("%f", &employees[count].basic_salary);

                    employees[count].hra = employees[count].basic_salary * 0.20; // 20% HRA
                    employees[count].da  = employees[count].basic_salary * 0.10; // 10% DA
                    employees[count].gross_salary = employees[count].basic_salary +
                                                    employees[count].hra +
                                                    employees[count].da;

                    printf("Salary record added successfully!\n");
                    count++;
                } else {
                    printf("Record full! Cannot add more employees.\n");
                }
                break;

            case 2:
                printf("\n--- Salary Records ---\n");
                for(i = 0; i < count; i++) {
                    printf("ID: %d | Name: %s | Basic: %.2f | HRA: %.2f | DA: %.2f | Gross: %.2f\n",
                           employees[i].emp_id, employees[i].name,
                           employees[i].basic_salary, employees[i].hra,
                           employees[i].da, employees[i].gross_salary);
                }
                break;

            case 3:
                printf("Enter Employee ID to search: ");
                scanf("%d", &id);
                int found = 0;
                for(i = 0; i < count; i++) {
                    if(employees[i].emp_id == id) {
                        printf("Record Found!\n");
                        printf("ID: %d | Name: %s | Basic: %.2f | HRA: %.2f | DA: %.2f | Gross: %.2f\n",
                               employees[i].emp_id, employees[i].name,
                               employees[i].basic_salary, employees[i].hra,
                               employees[i].da, employees[i].gross_salary);
                        found = 1;
                        break;
                    }
                }
                if(!found) {
                    printf("No salary record found with Employee ID %d\n", id);
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
