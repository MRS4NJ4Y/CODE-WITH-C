#include <stdio.h>

int main() {
    int num, i;
    int e = 0, o = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        if (i % 2 == 0) {
            e += i;  
        } else {
            o += i;
        }
    }
    printf("Sum of all even numbers of  first %d: %d\n",num, e);
    printf("Sum of all odd numbers of first %d: %d\n",num, o);

    return 0;
}
