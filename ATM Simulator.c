#include<stdio.h>
typedef struct ATM {
    float balance;
} ATM;
int main() {
    ATM a1;
    a1.balance = 41837.73; 
    int choice;
    float amount; 
    int pin = 1234;
    int userpin;
    do {
        printf("Enter your PIN to access the ATM: ");
        scanf("%d", &userpin);
        if (userpin == pin) {
            printf("Access granted.\n");
        } 
        else {
            printf("Incorrect PIN. Please try again.\n");
            continue;
        }
        printf("\n----------- ATM Simulator -----------\n");
        printf(" 1. Check Balance                  \n");
        printf(" 2. Deposit Money                  \n");
        printf(" 3. Withdraw Money                 \n");
        printf(" 4. Exit                           \n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("\nYour current balance is %.2f.\n", a1.balance);
                break;
            case 2:
                printf("\nEnter the amount to deposit: ");
                scanf("%f", &amount);
                if (amount > 0) {
                    a1.balance += amount;
                    printf("You've successfully deposited %.2f.\n", amount);
                    printf("Your new balance is %.2f.\n", a1.balance);
                } else {
                    printf("Invalid amount entered. Please try again.\n");
                }
                break;
            case 3:
                printf("\nEnter the amount to withdraw: ");
                scanf("%f", &amount);
                if (amount > 0 && amount <= a1.balance) {
                    a1.balance -= amount;
                    printf("You've successfully withdrawn %.2f.\n", amount);
                    printf("Your new balance is %.2f.\n", a1.balance);
                } else {
                    printf("Invalid transaction. Please try again.\n");
                }
                break;
            case 4:
                printf("\nThank you for using our ATM simulator. Goodbye!\n");
                break;
            default:
                printf("\nInvalid choice! Please select a valid option.\n");
        }
    } while (choice != 4);
    return 0;
}