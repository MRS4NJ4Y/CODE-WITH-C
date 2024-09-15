#include <stdio.h>
#include<conio.h>

int main() {
    int year;
    
    printf("Enter the year for checking: ");
    scanf("%d", &year);
    
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("It is a leap year.\n");
    } else {
        printf("It is not a leap year.\n");
    }
    
    grtch();
    return 0;
}
