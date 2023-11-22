#include <stdio.h>

int main() {
    float original_price;
    printf("Enter the original price of the item: $");
    scanf("%f", &original_price);

    float sale_price = original_price;
    char *days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};

    printf("\nSale Prices for Each Day:\n");
    for (int i = 0; i < 5; ++i) {
        printf("%s: $%.2f\n", days[i], sale_price);
        sale_price *= 0.9; // Reduce price by 10% for the next day
    }

    return 0;
}
