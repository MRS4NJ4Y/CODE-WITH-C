#include <stdio.h>

int main(){

    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    
    if (age>18)
        printf("you are elligble for votes\n");
    
    else 
        printf("You are not elligble for votes\n");

    printf("than you");

    return 0;
}