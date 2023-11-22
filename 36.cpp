#include <stdio.h>

int main() {
    int totalStudents = 200;
    int countA = 0, countB = 0, countC = 0, countD = 0, countF = 0;

    for (int i = 0; i < totalStudents; ++i) {
        int studentNumber, numberGrade;
        char letterGrade;

        printf("Enter student number: ");
        scanf("%d", &studentNumber);

        printf("Enter number grade for student %d: ", studentNumber);
        scanf("%d", &numberGrade);

        // Determine letter grade
        if (numberGrade >= 90 && numberGrade <= 100) {
            letterGrade = 'A';
            countA++;
        } else if (numberGrade >= 78 && numberGrade <= 89) {
            letterGrade = 'B';
            countB++;
        } else if (numberGrade >= 65 && numberGrade <= 77) {
            letterGrade = 'C';
            countC++;
        } else if (numberGrade >= 50 && numberGrade <= 64) {
            letterGrade = 'D';
            countD++;
        } else {
            letterGrade = 'F';
            countF++;
        }

        printf("Student Number: %d, Number Grade: %d, Letter Grade: %c\n", studentNumber, numberGrade, letterGrade);
    }

    printf("\nTotal number of As: %d\n", countA);
    printf("Total number of Bs: %d\n", countB);
    printf("Total number of Cs: %d\n", countC);
    printf("Total number of Ds: %d\n", countD);
    printf("Total number of Fs: %d\n", countF);

    return 0;
}
