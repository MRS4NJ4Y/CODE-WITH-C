#include <stdio.h>

int main() {
    int marks;
    printf("enter marks: \n");
    scanf("%d",&marks);

    if (marks<=30) {
        printf("fail");
    } else if (marks > 30 && marks <= 100) {
        printf("fail"); 
    } else {
        printf("enter valid marks(0-100)");
    }

    // marks <= 30 ? printf("pass\n") : printf("fail\n");


    return 0;
}