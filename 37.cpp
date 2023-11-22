#include <stdio.h>

int main() {
    float initial_price, total_accessory_cost = 0, total_cost, sales_tax_rate, sales_tax, final_total_cost;
    int num_accessories, i;
    
    printf("Enter the initial price of the car: ");
    scanf("%f", &initial_price);
    
    printf("Enter the number of accessories (0 to 10): ");
    scanf("%d", &num_accessories);
    
    for (i = 1; i <= num_accessories; ++i) {
        float accessory_price;
        printf("Enter the price of accessory %d: ", i);
        scanf("%f", &accessory_price);
        total_accessory_cost += accessory_price;
    }
    
    printf("Enter the sales tax rate (in decimal): ");
    scanf("%f", &sales_tax_rate);
    
    total_cost = initial_price + total_accessory_cost;
    sales_tax = total_cost * sales_tax_rate;
    final_total_cost = total_cost + sales_tax;
    
    printf("The total cost of the car is: %.2f\n", final_total_cost);
    
    return 0;
}
