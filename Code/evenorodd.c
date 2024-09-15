#include<stdio.h>
#include<math.h>

int main(){

    int num;
    printf("inter number is even or odd\n");
    scanf("%d", &num);

    if(num%2==0){
        printf("given number is even\n");
    }
    else {
        printf("given number is odd\n");
    }

    return 0;

}
