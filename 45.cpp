#include <stdio.h>

#define STUDENTS 25
#define MAX_TESTS 10

int main() {
    int grades[STUDENTS][MAX_TESTS]; // Assuming the maximum number of tests is 10

    // Input grades for each student for each test
    // You can input the data here or use a loop to input the values

    int student_number, test_number;

    // Input the student number and the test number
    printf("Enter student number (1-25): ");
    scanf("%d", &student_number);
    printf("Enter test number: ");
    scanf("%d", &test_number);

    // Check if the entered student number and test number are within valid ranges
    if (student_number >= 1 && student_number <= STUDENTS && test_number >= 1 && test_number <= MAX_TESTS) {
        // Retrieve the grade for the specified student and test
        int grade = grades[student_number - 1][test_number - 1];
        printf("Grade for Student %d on Test %d: %d\n", student_number, test_number, grade);
    } else {
        printf("Invalid student number or test number entered.\n");
    }

    return 0;
}
