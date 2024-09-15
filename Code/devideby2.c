#include<stdio.h>
#include<math.h>

int main (){

    int a;
    printf("enter a number: \n");
    scanf("%d",&a);

    if (a % 2 == 0) {
        printf("%d is divisible by 2\n", a);
        }
    
    else {
        printf("%d is not divisible by 2\n", a);
        }
   
    return 0;
}