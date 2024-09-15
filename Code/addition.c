// addition of number

#include<stdio.h>
int main(){
int num1, num2, num3, num4, num5;
    printf("enter 1st number: ");
    scanf("%d",&num1);
    printf("enter 2nd number: ");
    scanf("%d",&num2);
    printf("enter 3st number: ");
    scanf("%d",&num3);
    printf("enter 4st number: ");
    scanf("%d",&num4);
    printf("enter 5st number: ");
    scanf("%d",&num5);
int result = num1+num2+num3+num4+num5;
    printf("sum of your number= %d\n", result);
    printf("sum last three number= %d", num3+num4+num5);
    return 0;
}