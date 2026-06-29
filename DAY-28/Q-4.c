#include <stdio.h>
#include <string.h>

struct Contact {
    int id;
    char name[50];
    char phone[15];
    char email[50];
};

int main() {
    struct Contact contacts[50]; 
    int count = 0;               
    int choice, i;
    char phone[15];

    do {
        printf("\n--- Contact Management System ---\n");
        printf("1. Add Contact\n");
        printf("2. Display All Contacts\n");
        printf("3. Search Contact by Phone Number\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                if(count < 50) {
                    contacts[count].id = count + 1; // auto ID
                    printf("Enter Name: ");
                    scanf("%s", contacts[count].name);
                    printf("Enter Phone: ");
                    scanf("%s", contacts[count].phone);
                    printf("Enter Email: ");
                    scanf("%s", contacts[count].email);
                    count++;
                    printf("Contact added successfully!\n");
                } else {
                    printf("Contact list full! Cannot add more.\n");
                }
                break;

            case 2:
                printf("\n--- Contact List ---\n");
                for(i = 0; i < count; i++) {
                    printf("ID: %d | Name: %s | Phone: %s | Email: %s\n",
                           contacts[i].id, contacts[i].name,
                           contacts[i].phone, contacts[i].email);
                }
                break;

            case 3:
                printf("Enter Phone Number to search: ");
                scanf("%s", phone);
                int found = 0;
                for(i = 0; i < count; i++) {
                    if(strcmp(contacts[i].phone, phone) == 0) {
                        printf("Contact Found!\n");
                        printf("ID: %d | Name: %s | Phone: %s | Email: %s\n",
                               contacts[i].id, contacts[i].name,
                               contacts[i].phone, contacts[i].email);
                        found = 1;
                        break;
                    }
                }
                if(!found) {
                    printf("No contact found with Phone Number %s\n", phone);
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
