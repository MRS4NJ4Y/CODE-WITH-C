#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to calculate the sum of digits of a number
int sum_of_digits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    char input[10];
    int num1, num2;
    
    // Prompt the user to enter a string of the format "2/6"
    printf("Enter a number in the format X/Y: ");
    fgets(input, sizeof(input), stdin);
    
    // Replace the newline character if present
    input[strcspn(input, "\n")] = 0;
    
    // Split the input string using the '/' delimiter
    char *token = strtok(input, "/");
    if (token != NULL) {
        num1 = atoi(token); // Convert the first part to an integer
        token = strtok(NULL, "/");
        if (token != NULL) {
            num2 = atoi(token); // Convert the second part to an integer
        } else {
            printf("Invalid input format.\n");
            return 1;
        }
    } else {
        printf("Invalid input format.\n");
        return 1;
    }
    
    // Calculate the sum of digits of the first number
    int sum1 = sum_of_digits(num1);
    // Calculate the sum of digits of the second number
    int sum2 = sum_of_digits(num2);
    
    // Calculate the total sum
    int total_sum = num1 + sum1 + num2 + sum2;
    
    // Print the result
    printf("%d + %d + %d + %d = %d\n", num1, sum1, num2, sum2, total_sum);
    
    return 0;
}
