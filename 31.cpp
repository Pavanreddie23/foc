#include <stdio.h>

float calculateWaterBill(float waterUsed) {
    float bill = 0.0;

    if (waterUsed <= 1000) {
        bill = 15.00;
    } else if (waterUsed > 1000 && waterUsed <= 2000) {
        bill = 15.00 + (waterUsed - 1000) * 0.0175;
    } else if (waterUsed > 2000 && waterUsed <= 3000) {
        bill = 15.00 + (1000 * 0.0175) + ((waterUsed - 2000) * 0.02);
    } else if (waterUsed > 3000) {
        bill = 70.00;
    }

    return bill;
}

int main() {
    float waterUsed;
    printf("Enter the amount of water used in cubic feet: ");
    scanf("%f", &waterUsed);

    float bill = calculateWaterBill(waterUsed);
    printf("The water bill is: $%.2f\n", bill);

    return 0;
}
