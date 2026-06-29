#include <stdio.h>
#include <string.h>

struct Ticket {
    int booking_id;
    char name[50];
    char event[50];
    int tickets;
};

int main() {
    struct Ticket bookings[50];  
    int count = 0;               
    int choice, i, id;

    do {
        printf("\n--- Ticket Booking System ---\n");
        printf("1. Book Ticket\n");
        printf("2. Display All Bookings\n");
        printf("3. Search Booking by ID\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                if(count < 50) {
                    printf("Enter Booking ID: ");
                    scanf("%d", &bookings[count].booking_id);
                    printf("Enter Name: ");
                    scanf("%s", bookings[count].name);
                    printf("Enter Event Name: ");
                    scanf("%s", bookings[count].event);
                    printf("Enter Number of Tickets: ");
                    scanf("%d", &bookings[count].tickets);
                    count++;
                    printf("Ticket booked successfully!\n");
                } else {
                    printf("Booking list full! Cannot add more.\n");
                }
                break;

            case 2:
                printf("\n--- All Bookings ---\n");
                for(i = 0; i < count; i++) {
                    printf("Booking ID: %d | Name: %s | Event: %s | Tickets: %d\n",
                           bookings[i].booking_id, bookings[i].name,
                           bookings[i].event, bookings[i].tickets);
                }
                break;

            case 3:
                printf("Enter Booking ID to search: ");
                scanf("%d", &id);
                int found = 0;
                for(i = 0; i < count; i++) {
                    if(bookings[i].booking_id == id) {
                        printf("Booking Found!\n");
                        printf("Booking ID: %d | Name: %s | Event: %s | Tickets: %d\n",
                               bookings[i].booking_id, bookings[i].name,
                               bookings[i].event, bookings[i].tickets);
                        found = 1;
                        break;
                    }
                }
                if(!found) {
                    printf("No booking found with ID %d\n", id);
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
