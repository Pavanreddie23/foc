#include <stdio.h>

int main() {
    float loan_amount = 3000; // Loan amount
    float monthly_payment = 85; // Maximum monthly payment Mary can afford
    float monthly_interest_rate = 0.01; // Monthly interest rate (1% per month)
    float balance = loan_amount;
    int months = 0;
    float total_interest = 0;

    printf("Month\tInterest\tPrincipal\tBalance\n");

    while (balance > 0) {
        float interest = balance * monthly_interest_rate;
        float principal_payment = (monthly_payment > interest) ? (monthly_payment - interest) : balance;
        balance -= principal_payment;
        total_interest += interest;
        months++;

        printf("%d\t%.2f\t\t%.2f\t\t%.2f\n", months, interest, principal_payment, balance);

        if (balance < monthly_payment) {
            // Last payment to clear off the remaining balance
            total_interest += balance * monthly_interest_rate;
            balance = 0;
            months++;
            printf("%d\t%.2f\t\t%.2f\t\t%.2f (Final Payment)\n", months, balance * monthly_interest_rate, balance, balance);
        }
    }

    int years = months / 12;
    int remaining_months = months % 12;

    printf("\nIt will take %d years and %d months to pay off the loan.\n", years, remaining_months);
    printf("Total interest paid: $%.2f\n", total_interest);

    return 0;
}
