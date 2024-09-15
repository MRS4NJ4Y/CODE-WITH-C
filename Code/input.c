#include <stdio.h>

int main() {
    char name[50]; // Changed to array of characters to store a string
    int age;
    int weight; // Changed to int since weight is stored as an integer

    printf("What is your name: ");
    scanf("%s", name); // %s for string input

    printf("What is your age: ");
    scanf("%d", &age); // %d for integer input

    printf("What is your weight: ");
    scanf("%d", &weight); // %d for integer input

    // Clear input buffer
    while (getchar() != '\n');

    printf("%s your age is %d and your weight is %d\n", name, age, weight);

    return 0;
}