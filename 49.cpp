#include <stdio.h>

#define NUM_CLASS_LEVELS 5 // Four undergraduate levels + graduate school
#define NUM_MAJORS 7
#define TOTAL_STUDENTS 1200

int main() {
    int classLevels[NUM_CLASS_LEVELS] = {0}; // Array to store count of students in each class level
    int majorCounts[NUM_MAJORS] = {0}; // Array to store count of students in each major
    int classLevelByMajor[NUM_CLASS_LEVELS][NUM_MAJORS] = {0}; // Array to store count of class levels declaring each major

    // Input data for each student
    // ...

    // For each student
    for (int i = 0; i < TOTAL_STUDENTS; ++i) {
        int classLevel, major;
        // Input class level and major for each student
        // ...

        // Increment count for the class level of the student
        classLevels[classLevel - 1]++;

        // If the student has chosen a major, increment count for that major
        if (major != -1) {
            majorCounts[major - 1]++;
            // Increment count for the class level that declared that major
            classLevelByMajor[classLevel - 1][major - 1]++;
        }
    }

    // Output the count of students in each class level
    printf("Students in each class level:\n");
    for (int i = 0; i < NUM_CLASS_LEVELS; ++i) {
        printf("Class Level %d: %d students\n", i + 1, classLevels[i]);
    }

    // Output the count of students in each major
    printf("\nStudents in each major:\n");
    for (int i = 0; i < NUM_MAJORS; ++i) {
        printf("Major %d: %d students\n", i + 1, majorCounts[i]);
    }

    // Output the count of each class level that has declared each major
    printf("\nClass levels declaring each major:\n");
    for (int i = 0; i < NUM_CLASS_LEVELS; ++i) {
        for (int j = 0; j < NUM_MAJORS; ++j) {
            printf("Class Level %d declared Major %d: %d students\n", i + 1, j + 1, classLevelByMajor[i][j]);
        }
    }

    return 0;
}
