#include <stdio.h>

#define SALESPEOPLE 10
#define DAYS 7

int main() {
    int sales_data[SALESPEOPLE][DAYS];

    // Input sales data for each salesperson for each day
    // You can input the data here or use a loop to input the values

    // Calculate average sales for each salesperson for the week
    printf("Average sales for each salesperson for a week:\n");
    for (int i = 0; i < SALESPEOPLE; i++) {
        int total_sales = 0;
        for (int j = 0; j < DAYS; j++) {
            if (j != 2 && j != 3) { // Excluding the two days off
                total_sales += sales_data[i][j];
            }
        }
        double average_sales = (double)total_sales / 5; // Calculating average sales for 5 working days
        printf("Salesperson %d: $%.2f\n", i + 1, average_sales);
    }

    // Calculate total sales for each day and for the week
    printf("\nTotal sales for each day and for the week:\n");
    int daily_sales[DAYS] = {0};
    int total_weekly_sales = 0;

    for (int j = 0; j < DAYS; j++) {
        for (int i = 0; i < SALESPEOPLE; i++) {
            daily_sales[j] += sales_data[i][j]; // Summing up sales for each day
            total_weekly_sales += sales_data[i][j]; // Summing up sales for the week
        }
        printf("Day %d: $%d\n", j + 1, daily_sales[j]);
    }
    printf("Total sales for the week: $%d\n", total_weekly_sales);

    return 0;
}
