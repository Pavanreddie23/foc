#include <stdio.h>

#define MAX_STUDENTS 35

void calculateGrade(int num_correct[], char grade[], int best_score) {
    // Logic to calculate grades based on best_score and num_correct
    // Implement the grading criteria mentioned in the problem statement
    // Use loops or conditional statements to assign grades to each student
    // Update the 'grade' array accordingly
}

int main() {
    int student_ID[MAX_STUDENTS];
    int num_correct[MAX_STUDENTS];
    char grade[MAX_STUDENTS];
    int test_scores[MAX_STUDENTS][20];
    int num_students, best_score = 0;

    printf("Enter the number of students: ");
    scanf("%d", &num_students);

    for (int i = 0; i < num_students; i++) {
        printf("Enter student ID: ");
        scanf("%d", &student_ID[i]);

        // Logic to input test scores for the student
        // Assuming the test scores are entered here

        // Logic to calculate number of correct answers for each student
        // Assuming the calculation is done and stored in num_correct[i]

        // Update best_score if necessary
        if (num_correct[i] > best_score) {
            best_score = num_correct[i];
        }
    }

    calculateGrade(num_correct, grade, best_score);

    // Displaying student information
    printf("Student ID\tNum Correct\tGrade\n");
    for (int i = 0; i < num_students; i++) {
        printf("%d\t\t%d\t\t%c\n", student_ID[i], num_correct[i], grade[i]);
    }

    printf("Highest score in the class: %d\n", best_score);

    return 0;
}
