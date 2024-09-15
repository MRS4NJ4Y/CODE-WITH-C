#include <stdio.h>
int main()
{
    int a=33, b=10, add, sub, mul, div, mod;
    add = a-b;
    mul = a*b;
    sub = a-b;
    div = a/b;
    mod = a%b;
    printf("addition of a, b is : %d\n", add);
    printf("Subtraction of a, b is : %d\n", sub);
    printf("multiplaction of a, b is: %d\n", mul);
    printf("DIVISION OF a, b is: %d\n", div);
    printf("modulus of a, b is: %d\n", mod);


    return 0;
}