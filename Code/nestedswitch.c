#include<stdio.h>

int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    
    if (a > 0) {
        printf("%d is positive\n", a);
        
        if (a % 2 == 0) {
            printf("%d is even number\n", a);
        } else {
            printf("%d is odd number\n", a);
        }
    } else {
        printf("%d is negative\n", a);
        if (a==0){
            printf("%d is zero\n", a);
        }
        
    }

    return 0;
}
