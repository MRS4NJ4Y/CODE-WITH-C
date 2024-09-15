#include <stdio.h>

int main(){

    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);
    if(marks >= 90){
        printf("Grade: A++\n");
    }
    else if(marks >= 80){
        printf("Grade: A+\n");
    }
    else if(marks >= 70){
        printf("Grade: A\n");
    }
    else if(marks >= 60){
        printf("Grade: B\n");
    }
    else if(marks >= 50){
        printf("Grade: pass\n");
    
    }

    else{
        printf("Grade: fail\n");
    }

    return 0;
}