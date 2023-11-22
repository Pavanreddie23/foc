#include <stdio.h>

int main() {
    int originalNumber, sum = 0, checkDigit;
    
    printf("Enter a four-digit number: ");
    scanf("%d", &originalNumber);
    
    // Calculating the sum of the digits
    int temp = originalNumber;
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }
    
    // Checking if the sum is odd
    if (sum % 2 != 0) {
        checkDigit = 1;
    } else {
        checkDigit = 0;
    }
    
    // Generating the new number with the check digit
    int newNumber = originalNumber * 10 + checkDigit;
    
    printf("Original number: %d\n", originalNumber);
    printf("New number: %d\n", newNumber);
    
    return 0;
}
