#include <stdio.h>

int main() {
    int fillups = 6; // Total number of fill-ups
    float gallons[fillups]; // Array to store gallons filled at each fill-up
    int odometer[fillups]; // Array to store odometer readings at each fill-up
    int starting_odometer; // Starting odometer reading

    printf("Enter the starting odometer reading: ");
    scanf("%d", &starting_odometer);

    printf("Enter the gallons filled and odometer reading for each fill-up:\n");
    for (int i = 0; i < fillups; ++i) {
        printf("Fill-up %d - Gallons: ", i + 1);
        scanf("%f", &gallons[i]);

        printf("Fill-up %d - Odometer Reading: ", i + 1);
        scanf("%d", &odometer[i]);
    }

    float total_miles = 0;
    float total_gallons = 0;

    for (int i = 0; i < fillups - 1; ++i) {
        total_miles += odometer[i + 1] - odometer[i];
        total_gallons += gallons[i];
    }

    float average_mpg = total_miles / total_gallons;

    printf("\nThe average miles per gallon (MPG) over %d fill-ups is: %.2f\n", fillups, average_mpg);

    return 0;
}
