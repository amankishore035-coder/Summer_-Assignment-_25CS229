#include <stdio.h>

int main() {
    int arr[50];   
    int n = 0;     
    int choice, i, pos, val, search;

    do {
        printf("\n--- Menu Driven Array Operations ---\n");
        printf("1. Insert Element\n");
        printf("2. Delete Element\n");
        printf("3. Display Array\n");
        printf("4. Search Element\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                if(n < 50) {
                    printf("Enter element to insert: ");
                    scanf("%d", &val);
                    printf("Enter position (1 to %d): ", n+1);
                    scanf("%d", &pos);

                    if(pos >= 1 && pos <= n+1) {
                        for(i = n; i >= pos; i--) {
                            arr[i] = arr[i-1];
                        }
                        arr[pos-1] = val;
                        n++;
                        printf("Element inserted successfully!\n");
                    } else {
                        printf("Invalid position!\n");
                    }
                } else {
                    printf("Array is full!\n");
                }
                break;

            case 2:
                if(n > 0) {
                    printf("Enter position to delete (1 to %d): ", n);
                    scanf("%d", &pos);

                    if(pos >= 1 && pos <= n) {
                        for(i = pos-1; i < n-1; i++) {
                            arr[i] = arr[i+1];
                        }
                        n--;
                        printf("Element deleted successfully!\n");
                    } else {
                        printf("Invalid position!\n");
                    }
                } else {
                    printf("Array is empty!\n");
                }
                break;

            case 3:
                if(n > 0) {
                    printf("Array elements: ");
                    for(i = 0; i < n; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                } else {
                    printf("Array is empty!\n");
                }
                break;

            case 4:
                if(n > 0) {
                    printf("Enter element to search: ");
                    scanf("%d", &search);
                    int found = 0;
                    for(i = 0; i < n; i++) {
                        if(arr[i] == search) {
                            printf("Element %d found at position %d\n", search, i+1);
                            found = 1;
                            break;
                        }
                    }
                    if(!found) {
                        printf("Element not found!\n");
                    }
                } else {
                    printf("Array is empty!\n");
                }
                break;

            case 5:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }
    } while(choice != 5);

    return 0;
}
