#include<stdio.h>
int main(){
    int age;
    printf("enter age");
    scanf("%d",&age);

    if(age>18){
        printf("congraluation\n");
        printf("you are eligible to vote\n");
    }
    if (age >13 && age<18){
        printf("teenager\n");
    } else {
        printf("you are not eligible to vote\n");
    }



    return 0;
}