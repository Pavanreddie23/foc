#include <stdio.h>

float calculateTicketCharge(int age) {
    float ticketCharge = 0.0;

    if (age > 55) {
        ticketCharge = 10.00;
    } else if (age >= 21 && age <= 54) {
        ticketCharge = 15.00;
    } else if (age >= 13 && age <= 20) {
        ticketCharge = 10.00;
    } else if (age >= 3 && age <= 12) {
        ticketCharge = 5.00;
    } else {
        ticketCharge = 0.00; // For ages under 3
    }

    return ticketCharge;
}

int main() {
    int age;
    printf("Enter the age of the person: ");
    scanf("%d", &age);

    float charge = calculateTicketCharge(age);

    if (charge == 0.00) {
        printf("The admission is free for a person under 3 years old.\n");
    } else {
        printf("The ticket charge for the person is: $%.2f\n", charge);
    }

    return 0;
}
