#include <stdio.h>

#define TOTAL_QUESTIONNAIRES 95
#define MAX_LENGTH 50

// Function to calculate average salary given sets of items
float calculateAverageSalary(char itemSet1[], char itemSet2[], int ages[], char genders[][MAX_LENGTH],
                             char maritalStatuses[][MAX_LENGTH], char collegeMajors[][MAX_LENGTH], float salaries[]) {
    float sumSalary = 0;
    int countMatches = 0;

    // Input user-selected sets (e.g., age and gender)
    char set1[MAX_LENGTH], set2[MAX_LENGTH];
    printf("Enter the first set of items (age, gender, marital status, college major): ");
    scanf("%s", set1);
    printf("Enter the second set of items (age, gender, marital status, college major): ");
    scanf("%s", set2);

    // Iterate through returned questionnaires
    for (int i = 0; i < TOTAL_QUESTIONNAIRES; ++i) {
        // Check if the data matches the user-selected criteria
        if ((strcmp(set1, "age") == 0 && strcmp(set2, "gender") == 0 && /*...*/ ) {
            // Match found
            sumSalary += salaries[i];
            countMatches++;
        }
        // Add more conditions based on user-selected sets
    }

    // Calculate and return the average salary
    if (countMatches > 0) {
        return sumSalary / countMatches;
    } else {
        printf("No matches found.\n");
        return -1; // Return an error code to indicate no matches found
    }
}

int main() {
    int ages[TOTAL_QUESTIONNAIRES];
    char genders[TOTAL_QUESTIONNAIRES][MAX_LENGTH];
    char maritalStatuses[TOTAL_QUESTIONNAIRES][MAX_LENGTH];
    char collegeMajors[TOTAL_QUESTIONNAIRES][MAX_LENGTH];
    float salaries[TOTAL_QUESTIONNAIRES];

    // Input data for each returned questionnaire
    // ...

    // Calculate average salary given two sets of items
    float averageSalary = calculateAverageSalary(ages, genders, maritalStatuses, collegeMajors, salaries);
    if (averageSalary != -1) {
        printf("Average Salary: %.2f\n", averageSalary);
    }

    return 0;
}
