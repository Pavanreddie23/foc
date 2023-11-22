#include <stdio.h>
#include <string.h>

int main() {
    char studentNames[5][50] = {"Alice", "Bob", "Charlie", "David", "Emily"};
    int testScores[5] = {85, 75, 90, 78, 92};

    char searchName[50];
    printf("Enter student's name to search: ");
    scanf("%s", searchName);

    int found = 0;
    for (int i = 0; i < 5; i++) {
        if (strcmp(studentNames[i], searchName) == 0) {
            printf("Student Name: %s\nTest Score: %d\n", studentNames[i], testScores[i]);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student name not found.\n");
    }

    return 0;
	}

