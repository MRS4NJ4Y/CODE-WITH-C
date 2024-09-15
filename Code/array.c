#include <stdio.h>

int main() {
    int n, i, j, trace = 0;
    
    // Input the size of the matrix
    printf("Enter the size of the matrix (n x n): ");
    scanf("%d", &n);
    
    int matrix; // Declare a 2D array

    // Input elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("Element : ", i, j);
            scanf("%d", &matrix);
        }
    }

    // Calculate the trace
    for(i = 0; i < n; i++) {
        trace += matrix; // Add the diagonal elements
    }

    // Output the trace
    printf("The trace of the matrix is: %d\n", trace);
    
    return 0;
}