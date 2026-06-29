#include <stdio.h>
#include <string.h>

struct Item {
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() {
    struct Item inventory[50];  
    int count = 0;              
    int choice, i, id;

    do {
        printf("\n--- Inventory Management System ---\n");
        printf("1. Add Item\n");
        printf("2. Display All Items\n");
        printf("3. Search Item by ID\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                if(count < 50) {
                    printf("Enter Item ID: ");
                    scanf("%d", &inventory[count].id);
                    printf("Enter Item Name: ");
                    scanf("%s", inventory[count].name);
                    printf("Enter Quantity: ");
                    scanf("%d", &inventory[count].quantity);
                    printf("Enter Price: ");
                    scanf("%f", &inventory[count].price);
                    count++;
                    printf("Item added successfully!\n");
                } else {
                    printf("Inventory full! Cannot add more items.\n");
                }
                break;

            case 2:
                printf("\n--- Item List ---\n");
                for(i = 0; i < count; i++) {
                    printf("ID: %d | Name: %s | Quantity: %d | Price: %.2f\n",
                           inventory[i].id, inventory[i].name,
                           inventory[i].quantity, inventory[i].price);
                }
                break;

            case 3:
                printf("Enter Item ID to search: ");
                scanf("%d", &id);
                int found = 0;
                for(i = 0; i < count; i++) {
                    if(inventory[i].id == id) {
                        printf("Item Found!\n");
                        printf("ID: %d | Name: %s | Quantity: %d | Price: %.2f\n",
                               inventory[i].id, inventory[i].name,
                               inventory[i].quantity, inventory[i].price);
                        found = 1;
                        break;
                    }
                }
                if(!found) {
                    printf("No item found with ID %d\n", id);
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
