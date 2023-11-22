#include <stdio.h>

int main() {
    int total_courses;
    printf("Enter the total number of courses: ");
    scanf("%d", &total_courses);

    char grades[total_courses];
    int grade_points[total_courses];
    int total_grade_points = 0;

    printf("Enter the letter grades for each course (A/B/C/D/F):\n");

    for (int i = 0; i < total_courses; ++i) {
        printf("Grade for Course %d: ", i + 1);
        scanf(" %c", &grades[i]);

        switch (grades[i]) {
            case 'A':
                grade_points[i] = 9;
                break;
            case 'B':
                grade_points[i] = 8;
                break;
            case 'C':
                grade_points[i] = 7;
                break;
            case 'D':
                grade_points[i] = 6;
                break;
            case 'F':
                grade_points[i] = 0;
                break;
            default:
                printf("Invalid grade entered. Please enter A/B/C/D/F.\n");
                i--; // Decrement to re-enter the grade for the same course
                break;
        }

        total_grade_points += grade_points[i];
    }

    float grade_average = (float)total_grade_points / total_courses;

    printf("\nThe grade average for the semester is: %.2f\n", grade_average);

    return 0;
}
