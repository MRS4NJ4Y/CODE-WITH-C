#include <stdio.h>

int main() {
    int a[100], n, i, j, isPrime;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
        for (i = 0; i < n; i++) {
            a[i]=i;
        }

    printf("Prime numbers are: ");
    for (i = 0; i < n; i++) {
        if (a[i] <= 1) {
            continue;
        }
        isPrime = 1; // Assume the number is prime
        for (j = 2; j <= a[i] / 2; j++) {
            if (a[i] % j == 0) {
                isPrime = 0; // The number is not prime
                break;
            }
        }
        if (isPrime) {
            printf("%d ", a[i]);
        }
    }

    printf("\n");
    return 0;
}
