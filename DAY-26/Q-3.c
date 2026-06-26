#include <stdio.h>

int main() {
    int balance = 1000;   
    int choice, amount;

    printf("Welcome to the ATM Simulation!\n");

    do {
        printf("\nMenu:\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Your balance is: %d\n", balance);
                break;

            case 2:
                printf("Enter amount to deposit: ");
                scanf("%d", &amount);
                balance += amount;
                printf("Deposit successful! New balance: %d\n", balance);
                break;

            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%d", &amount);
                if(amount <= balance) {
                    balance -= amount;
                    printf("Withdrawal successful! New balance: %d\n", balance);
                } else {
                    printf("Insufficient balance!\n");
                }
                break;

            case 4:
                printf("Thank you for using the ATM. Goodbye!\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while(choice != 4);

    return 0;
}
