#include <stdio.h>
#include <string.h>

struct BankAccount {
    int acc_no;
    char name[50];
    float balance;
};

int main() {
    struct BankAccount accounts[50];  
    int count = 0;                    
    int choice, i, acc_no;

    do {
        printf("\n--- Bank Account System ---\n");
        printf("1. Create Account\n");
        printf("2. Display All Accounts\n");
        printf("3. Search Account by Number\n");
        printf("4. Deposit Money\n");
        printf("5. Withdraw Money\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                if(count < 50) {
                    printf("Enter Account Number: ");
                    scanf("%d", &accounts[count].acc_no);
                    printf("Enter Name: ");
                    scanf("%s", accounts[count].name);
                    printf("Enter Initial Balance: ");
                    scanf("%f", &accounts[count].balance);
                    count++;
                    printf("Account created successfully!\n");
                } else {
                    printf("Bank database full! Cannot add more accounts.\n");
                }
                break;

            case 2:
                printf("\n--- Account List ---\n");
                for(i = 0; i < count; i++) {
                    printf("Acc No: %d | Name: %s | Balance: %.2f\n",
                           accounts[i].acc_no, accounts[i].name, accounts[i].balance);
                }
                break;

            case 3:
                printf("Enter Account Number to search: ");
                scanf("%d", &acc_no);
                int found = 0;
                for(i = 0; i < count; i++) {
                    if(accounts[i].acc_no == acc_no) {
                        printf("Account Found!\n");
                        printf("Acc No: %d | Name: %s | Balance: %.2f\n",
                               accounts[i].acc_no, accounts[i].name, accounts[i].balance);
                        found = 1;
                        break;
                    }
                }
                if(!found) {
                    printf("No account found with number %d\n", acc_no);
                }
                break;

            case 4:
                printf("Enter Account Number to deposit: ");
                scanf("%d", &acc_no);
                found = 0;
                for(i = 0; i < count; i++) {
                    if(accounts[i].acc_no == acc_no) {
                        float amount;
                        printf("Enter amount to deposit: ");
                        scanf("%f", &amount);
                        accounts[i].balance += amount;
                        printf("Deposit successful! New Balance: %.2f\n", accounts[i].balance);
                        found = 1;
                        break;
                    }
                }
                if(!found) {
                    printf("Account not found!\n");
                }
                break;

            case 5:
                printf("Enter Account Number to withdraw: ");
                scanf("%d", &acc_no);
                found = 0;
                for(i = 0; i < count; i++) {
                    if(accounts[i].acc_no == acc_no) {
                        float amount;
                        printf("Enter amount to withdraw: ");
                        scanf("%f", &amount);
                        if(amount <= accounts[i].balance) {
                            accounts[i].balance -= amount;
                            printf("Withdrawal successful! New Balance: %.2f\n", accounts[i].balance);
                        } else {
                            printf("Insufficient balance!\n");
                        }
                        found = 1;
                        break;
                    }
                }
                if(!found) {
                    printf("Account not found!\n");
                }
                break;

            case 6:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }
    } while(choice != 6);

    return 0;
}
