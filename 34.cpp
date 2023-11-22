#include <stdio.h>

float calculateRoomCost(int numPeople, int isCompanyBusiness, int age) {
    float baseCost = 0.0;
    float totalCost = 0.0;

    // Assign base cost based on the number of people
    if (numPeople == 2) {
        baseCost = 85.0;
    } else if (numPeople == 3) {
        baseCost = 90.0;
    } else if (numPeople == 4) {
        baseCost = 95.0;
    } else {
        baseCost = 95.0 + (numPeople - 4) * 6.0; // For additional people
    }

    // Apply discounts if applicable
    if (isCompanyBusiness == 1) {
        totalCost = baseCost * 0.8; // 20% discount for company business
    } else if (age > 60) {
        totalCost = baseCost * 0.85; // 15% discount for customers over 60 years old
    } else {
        totalCost = baseCost; // No discounts applied
    }

    return totalCost;
}

int main() {
    int numPeople, isCompanyBusiness, age;

    printf("Enter the number of people staying: ");
    scanf("%d", &numPeople);

    printf("Is the customer staying on company business? (1 for Yes, 0 for No): ");
    scanf("%d", &isCompanyBusiness);

    printf("Enter the age of the customer: ");
    scanf("%d", &age);

    float cost = calculateRoomCost(numPeople, isCompanyBusiness, age);
    printf("The cost of the room is: $%.2f\n", cost);

    return 0;
}
