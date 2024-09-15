#include <stdio.h>

int main(){
    int marks;
    printf("enter marks(0-100): ");
    scanf("%d",&marks);

    // marks>30? printf("fail\n") : printf("pass\n");

    if (marks<30) {
        printf("C \n");
    }
    else if (marks >= 30 && marks < 70) {
        printf("B \n");
    }
    else if (marks >= 70 && marks < 90) {
        printf("A \n");
    }
    else if (marks >= 90 && marks <= 100) {
        printf("A+ \n");
    }
    else {
        print("invalid input\n");
        printf("enter the valid marks \n");
    }

    return 0;
}