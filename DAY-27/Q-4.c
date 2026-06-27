#include <stdio.h>
#include <string.h>

struct Marksheet {
    int roll;
    char name[50];
    float marks[5];  
    float total;
    float average;
    char grade;
};

int main() {
    struct Marksheet students[50];  
    int count = 0;                  
    int choice, i, j, roll;

    do {
        printf("\n--- Marksheet Generation System ---\n");
        printf("1. Add Student Marksheet\n");
        printf("2. Display All Marksheets\n");
        printf("3. Search Marksheet by Roll Number\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                if(count < 50) {
                    printf("Enter Roll Number: ");
                    scanf("%d", &students[count].roll);
                    printf("Enter Name: ");
                    scanf("%s", students[count].name);

                    students[count].total = 0;
                    for(j = 0; j < 5; j++) {
                        printf("Enter marks for Subject %d: ", j+1);
                        scanf("%f", &students[count].marks[j]);
                        students[count].total += students[count].marks[j];
                    }

                    students[count].average = students[count].total / 5;
                    if(students[count].average >= 75)
                        students[count].grade = 'A';
                    else if(students[count].average >= 60)
                        students[count].grade = 'B';
                    else if(students[count].average >= 50)
                        students[count].grade = 'C';
                    else
                        students[count].grade = 'F';

                    printf("Marksheet added successfully!\n");
                    count++;
                } else {
                    printf("Record full! Cannot add more students.\n");
                }
                break;

            case 2:
                printf("\n--- All Marksheets ---\n");
                for(i = 0; i < count; i++) {
                    printf("Roll: %d | Name: %s | Total: %.2f | Average: %.2f | Grade: %c\n",
                           students[i].roll, students[i].name,
                           students[i].total, students[i].average,
                           students[i].grade);
                }
                break;

            case 3:
                printf("Enter Roll Number to search: ");
                scanf("%d", &roll);
                int found = 0;
                for(i = 0; i < count; i++) {
                    if(students[i].roll == roll) {
                        printf("Record Found!\n");
                        printf("Roll: %d | Name: %s\n", students[i].roll, students[i].name);
                        for(j = 0; j < 5; j++) {
                            printf("Subject %d Marks: %.2f\n", j+1, students[i].marks[j]);
                        }
                        printf("Total: %.2f | Average: %.2f | Grade: %c\n",
                               students[i].total, students[i].average, students[i].grade);
                        found = 1;
                        break;
                    }
                }
                if(!found) {
                    printf("No marksheet found with Roll Number %d\n", roll);
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
