#include <stdio.h>

int main() {

    int CORRECT_PIN = 1234;
    int pin_attempts = 3;
    int entered_pin;
    int balance = 10000.00;
    int logged_in = 0;


    printf("Welcome \n");


    for (int i = 0; i < pin_attempts; ++i) {
        printf("Enter your PIN: ");
        if (scanf("%d", &entered_pin) != 1) {


            int c;
            while ((c = getchar()) != '\n' && c != EOF) { }
            printf("Invalid PIN format.\n");
            continue;
        }

        if (entered_pin == CORRECT_PIN) {
            logged_in = 1;
            break;
        } else {
            printf("Incorrect PIN. ");
            if (i < pin_attempts - 1)
                printf("You have %d attempt(s) left.\n", pin_attempts - 1 - i);
            else
                printf("No attempts remaining.\n");
        }
    }

    if (!logged_in) {
        printf("Too many incorrect PIN attempts. Exiting.\n");
        return 0;
    }


    while (1) {
        int choice;
        printf("\nATM MENU\n");
        printf("1. Balance inquiry\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Choose an option (1-4): ");

        if (scanf("%d", &choice) != 1) {

            int c;
            while ((c = getchar()) != '\n' && c != EOF) { }
            printf("Invalid input. Please enter a number 1-4.\n");
            continue;
        }

        if (choice == 1) {
            printf("Your current balance is: $%.2f\n", balance);

        } else if (choice == 2) {


            int amount;
            printf("Enter amount to deposit: ");


            if (scanf("%lf", &amount) != 1) {

                int c;
                while ((c = getchar()) != '\n' && c != EOF) { }
                printf("Invalid amount. Deposit cancelled.\n");
                continue;

            }

            if (amount <= 0.0) {
                printf("Deposit must be a positive number. Deposit cancelled.\n");
                continue;

            }
            balance += amount;
            printf("Deposit successful. New balance: $%.2f\n", balance);


        } else if (choice == 3) {
            int amount;
            printf("Enter amount to withdraw: ");
            if (scanf("%lf", &amount) != 1) {

                int c;
                while ((c = getchar()) != '\n' && c != EOF) { }
                printf("Invalid amount. Withdrawal cancelled.\n");
                continue;

            }
            if (amount <= 0.0) {
                printf("Withdrawal must be a positive number. Withdrawal cancelled.\n");
                continue;

            }
            if (amount > balance) {
                printf("Insufficient funds. Withdrawal cancelled.\n");
                continue;

            }
            balance -= amount;
            printf("Please take your cash. New balance: $%.2f\n", balance);


        } else if (choice == 4) {
            printf("Thank you for using the ATM. Goodbye.\n");
            break;


        } else {
            printf("Invalid choice. Enter 1, 2, 3, or 4.\n");

        }
    }

    return 0;
}

