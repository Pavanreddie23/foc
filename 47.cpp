#include <stdio.h>

#define NUM_DEPARTMENTS 12

int main() {
    float wagesMen[NUM_DEPARTMENTS] = {0};
    float wagesWomen[NUM_DEPARTMENTS] = {0};
    int totalEmployees[NUM_DEPARTMENTS] = {0};
    int womenInDepartment[NUM_DEPARTMENTS] = {0};
    int menInDepartment[NUM_DEPARTMENTS] = {0};
    int ageWomenInDepartment[NUM_DEPARTMENTS] = {0};
    int ageMenInDepartment[NUM_DEPARTMENTS] = {0};

    // Input data and perform necessary calculations
    // ...

    // Calculate average wages of women and men
    float avgWagesWomen = 0, avgWagesMen = 0;
    // Calculate averages using wagesMen[] and wagesWomen[]

    // Calculate total number of employees in each department
    int totalEmployeesInDept = 0;
    // Calculate using totalEmployees[]

    // Calculate number of women and men in each department
    int womenCount = 0, menCount = 0;
    // Calculate using womenInDepartment[] and menInDepartment[]

    // Calculate average age of women and men in each department
    float avgAgeWomen = 0, avgAgeMen = 0;
    // Calculate using ageWomenInDepartment[] and ageMenInDepartment[]

    // Print the results
    printf("Average Wages of Women: %.2f\n", avgWagesWomen);
    printf("Average Wages of Men: %.2f\n", avgWagesMen);
    printf("Total Employees in Each Department:\n");
    // Print totalEmployees[] for each department
    printf("Number of Women in Each Department:\n");
    // Print womenInDepartment[] for each department
    printf("Number of Men in Each Department:\n");
    // Print menInDepartment[] for each department
    printf("Average Age of Women in Each Department: %.2f\n", avgAgeWomen);
    printf("Average Age of Men in Each Department: %.2f\n", avgAgeMen);

    return 0;
}
