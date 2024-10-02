#include <stdio.h>

void loanEligibility() {
    int age;
    float income;

    printf("\n--- Loan Eligibility Program ---\n");
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your annual income (in Ksh): ");
    scanf("%f", &income);

    if (age >= 21 && income >= 21000) {
        printf("Congratulations, you qualify for a loan.\n");
    } else {
        printf("Unfortunately, we are unable to offer you a loan at this time.\n");
    }
}

void libraryFine() {
    int bookID, dueDate, returnDate, daysOverdue;
    float fineRate, fineAmount;

    printf("\n--- Library Fine Calculation Program ---\n");
    printf("Enter Book ID: ");
    scanf("%d", &bookID);
    printf("Enter Due Date (as a day number): ");
    scanf("%d", &dueDate);
    printf("Enter Return Date (as a day number): ");
    scanf("%d", &returnDate);

    daysOverdue = returnDate - dueDate;

    if (daysOverdue <= 7) {
        fineRate = 20;
    } else if (daysOverdue <= 14) {
        fineRate = 50;
    } else {
        fineRate = 100;
    }

    fineAmount = fineRate * daysOverdue;

    printf("\n--- Fine Summary ---\n");
    printf("Book ID: %d\n", bookID);
    printf("Due Date: %d\n", dueDate);
    printf("Return Date: %d\n", returnDate);
    printf("Days Overdue: %d\n", daysOverdue);
    printf("Fine Rate per day: Ksh %.2f\n", fineRate);
    printf("Total Fine Amount: Ksh %.2f\n", fineAmount);
}

int main() {
    int choice;

    printf("--- Welcome to the Program Menu ---\n");
    printf("Choose a program to run:\n");
    printf("1. Loan Eligibility\n");
    printf("2. Library Fine Calculation\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            loanEligibility();
            break;
        case 2:
            libraryFine();
            break;
        default:
            printf("Invalid choice! Please choose either 1 or 2.\n");
            break;
    }

    return 0;
}