#include<stdio.h>

int main() {
    int a, b, c;
    printf("Enter the values for a, b, c\n");
    scanf("%d %d %d", &a, &b, &c);

    (a > b && a > c) ? printf("a is greater\n") :
    (b > c) ? printf("b is greater\n") : printf("c is greater\n");

    return 0;
}