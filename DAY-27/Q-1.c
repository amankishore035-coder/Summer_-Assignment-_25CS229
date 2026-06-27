#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    int age;
    float marks;
};

int main() {
    struct Student students[50];  
    int count = 0;                
    int choice, i, roll;

    do {
        printf("\n--- Student Record Management ---\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student by Roll Number\n");
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
                    printf("Enter Age: ");
                    scanf("%d", &students[count].age);
                    printf("Enter Marks: ");
                    scanf("%f", &students[count].marks);
                    count++;
                    printf("Student added successfully!\n");
                } else {
                    printf("Record full! Cannot add more students.\n");
                }
                break;

            case 2:
                printf("\n--- Student List ---\n");
                for(i = 0; i < count; i++) {
                    printf("Roll: %d | Name: %s | Age: %d | Marks: %.2f\n",
                           students[i].roll, students[i].name,
                           students[i].age, students[i].marks);
                }
                break;

            case 3:
                printf("Enter Roll Number to search: ");
                scanf("%d", &roll);
                int found = 0;
                for(i = 0; i < count; i++) {
                    if(students[i].roll == roll) {
                        printf("Record Found!\n");
                        printf("Roll: %d | Name: %s | Age: %d | Marks: %.2f\n",
                               students[i].roll, students[i].name,
                               students[i].age, students[i].marks);
                        found = 1;
                        break;
                    }
                }
                if(!found) {
                    printf("No student found with Roll Number %d\n", roll);
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
