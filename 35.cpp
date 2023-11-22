#include <stdio.h>

int main() {
    char courseName[50];
    char grade;
    int units;
    float totalGradePoints = 0.0;
    int totalUnits = 0;
    int tripValue = 0;

    printf("Enter the course name, letter grade, and units (Enter 'X' to stop):\n");

    while (tripValue != 1) {
        printf("Course name: ");
        scanf("%s", courseName);

        if (courseName[0] == 'X' && courseName[1] == '\0') {
            tripValue = 1;
            break;
        }

        printf("Grade: ");
        scanf(" %c", &grade); // space before %c to consume newline character

        printf("Units: ");
        scanf("%d", &units);

        float gradePoints = 0.0;

        switch (grade) {
            case 'A':
                gradePoints = 4.0 * units;
                break;
            case 'B':
                gradePoints = 3.0 * units;
                break;
            case 'C':
                gradePoints = 2.0 * units;
                break;
            case 'D':
                gradePoints = 1.0 * units;
                break;
            case 'F':
                gradePoints = 0.0 * units;
                break;
            default:
                printf("Invalid grade entered.\n");
                continue;
        }

        totalGradePoints += gradePoints;
        totalUnits += units;
    }

    float GPA = (totalUnits != 0) ? (totalGradePoints / totalUnits) : 0.0;

    printf("The GPA for the semester is: %.2f\n", GPA);

    return 0;
}
