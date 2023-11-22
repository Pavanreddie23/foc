#include <stdio.h>

#define DAYS_IN_TWO_WEEKS 14

int main() {
    float windSpeeds[DAYS_IN_TWO_WEEKS];
    float totalWindSpeed = 0, averageWindSpeed = 0;
    float maxWindSpeed = 0, minWindSpeed = 0;
    int maxWindSpeedDay = 0, minWindSpeedDay = 0;

    // Input fastest wind speed for each day over two weeks
    for (int i = 0; i < DAYS_IN_TWO_WEEKS; ++i) {
        printf("Enter the fastest wind speed for day %d: ", i + 1);
        scanf("%f", &windSpeeds[i]);

        // Calculate total wind speed for averaging later
        totalWindSpeed += windSpeeds[i];

        // Check for maximum wind speed and its corresponding day
        if (i == 0 || windSpeeds[i] > maxWindSpeed) {
            maxWindSpeed = windSpeeds[i];
            maxWindSpeedDay = i + 1; // Day numbering starts from 1
        }

        // Check for minimum wind speed and its corresponding day
        if (i == 0 || windSpeeds[i] < minWindSpeed) {
            minWindSpeed = windSpeeds[i];
            minWindSpeedDay = i + 1; // Day numbering starts from 1
        }
    }

    // Calculate the average wind speed over the two weeks
    averageWindSpeed = totalWindSpeed / DAYS_IN_TWO_WEEKS;

    // Output the average wind speed
    printf("\nAverage wind speed over two weeks: %.2f\n", averageWindSpeed);

    // Output the day with the highest wind speed
    printf("Day with the highest wind speed: Day %d\n", maxWindSpeedDay);

    // Output the day with the lowest wind speed
    printf("Day with the lowest wind speed: Day %d\n", minWindSpeedDay);

    // Calculate and output the difference between highest wind speed and each day's average wind speed
    printf("\nDifference between highest wind speed and each day's average wind speed:\n");
    for (int i = 0; i < DAYS_IN_TWO_WEEKS; ++i) {
        float difference = maxWindSpeed - windSpeeds[i];
        printf("Day %d: %.2f\n", i + 1, difference);
    }

    return 0;
}
