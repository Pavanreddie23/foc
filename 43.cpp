#include <stdio.h>

#define HOURS_PER_DAY 24
#define DAYS 14

int main() {
    int customers_per_hour[HOURS_PER_DAY][DAYS];
    double average_customers_per_hour[HOURS_PER_DAY] = {0};
    int employees_per_hour[HOURS_PER_DAY];

    // Input the number of customers for each hour over 14 days
    // You can input the data here or use a loop to input the values

    // Calculate the average number of customers per hour over 14 days
    for (int hour = 0; hour < HOURS_PER_DAY; hour++) {
        int total_customers = 0;
        for (int day = 0; day < DAYS; day++) {
            total_customers += customers_per_hour[hour][day];
        }
        average_customers_per_hour[hour] = (double)total_customers / DAYS;
    }

    // Calculate the needed number of employees per hour
    for (int hour = 0; hour < HOURS_PER_DAY; hour++) {
        int additional_employees = (average_customers_per_hour[hour] - 60) / 20;
        employees_per_hour[hour] = (additional_employees < 0) ? 3 : 3 + additional_employees;
    }

    // Display the needed number of employees per hour
    printf("Hour\tEmployees Needed\n");
    for (int hour = 0; hour < HOURS_PER_DAY; hour++) {
        printf("%d\t%d\n", hour, employees_per_hour[hour]);
    }

    return 0;
}
