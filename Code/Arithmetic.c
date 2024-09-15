#include <stdio.h>
#include <math.h>

int main() {
    int a = 71, b = 5, c = 10, d = 11, e = 25;
    int add, sub, mul, avr, modular;
    
    add = a + b + c + d + e;
    sub = a - b - c - d - e;
    mul = a * b * c * d * e;
    avr = add / 5;
    modular = add % avr;
    
    double addpower = pow(add, 2);
    double avrsquare = pow(avr, 2);
    
    printf("if a = 71, b = 5, c = 10, d = 11, e = 25; then\n");
    printf("add = %d\nsub = %d\nmul = %d\navr = %d\npower/square of average = %.2f\n", add, sub, mul, avr, avrsquare);
    printf("power/square of addition = %.2f\n", addpower);
    printf("modular of add/average = %d\n", modular);

    // Bodmas expressions
    printf("a + a - b * c / 2 = %d\n", a + a - b * c / 2);
    printf("2 + 2 / 2 = %d\n", 2 + 2 / 2);
    printf("5 * (2 / 2) * 3 = %d\n", 5 * (2 / 2) * 3);

    // Decimal division
    printf("100.05 / 3 = %.2f\n", 100.05 / 3);

    return 0;
}
