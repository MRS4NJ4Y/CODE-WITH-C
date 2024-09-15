#include <stdio.h>
#include <conio.h>

int main() {
    int n, i, search, found = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++) {
        printf("Enter element a[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    // Ask the user for the element to search
    printf("Enter the element to search: ");
    scanf("%d", &search);

    // Search for the element in the array and report all positions
    for(i = 0; i < n; i++) {
        if(arr[i] == search) {
            printf("Element %d found at index a[%d].\n", search, i);
            found = 1;
        }
    }

    if(!found) {
        printf("Element %d not found in the array.\n", search);
    }

    getch(); // Use getch() if you want to pause the output
    return 0;
}
