#include <stdio.h>

double balance = 0;

void deposit(double amount) {
    balance += amount;
    printf("Amount deposited successfully. Current Balance: $%.2lf\n", balance);
}

void withdraw(double amount) {
    if (amount <= balance) {
        balance -= amount;
        printf("Amount withdrawn successfully. Current Balance: $%.2lf\n", balance);
    } else {
        printf("Insufficient balance!\n");
    }
}

void checkBalance() {
    printf("Current Balance: $%.2lf\n", balance);
}

int main() {
    int choice;
    double amount;

    do {
        printf("\nBank Management System Menu:\n");
        printf("1. Deposit Money\n");
        printf("2. Withdraw Money\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter amount to deposit: ");
                scanf("%lf", &amount);
                deposit(amount);
                break;
            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%lf", &amount);
                withdraw(amount);
                break;
            case 3:
                checkBalance();
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 4);

    return 0;
}