#include <stdio.h>  // Standard I/O library for input and output

// Function to calculate factorial of a given number
long long factorial(int n) {
    long long fact = 1; // Variable to store factorial result, initialized to 1

    // Check if the number is negative
    if (n < 0) {
        return -1; // Return -1 for invalid input (negative numbers)
    }

    // Loop to multiply numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        fact *= i;  // Multiply current value of fact by i
    }

    return fact; // Return the computed factorial value
}

int main() {
    int num;  // Variable to store user input
    
    // Ask the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num); // Read user input and store it in num
    
    // Call the factorial function and store the result
    long long result = factorial(num);
    
    // Check if the result is valid (negative numbers are not allowed)
    if (result == -1) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Print the calculated factorial
        printf("Factorial of %d is %lld\n", num, result);
    }

    return 0; // Indicate successful program execution
}

