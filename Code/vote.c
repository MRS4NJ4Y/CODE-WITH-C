#include<stdio.h>

int main(){

    int age;
    printf ("enter your age: ");
    scanf("%d",&age);

    (age>=18)? printf(" congratulations! your age is elligible for votes ") : printf("your age is not valid for vaote") ;

    return 0;


}