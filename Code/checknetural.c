#include<stdio.h>
int main(){
    float i;
    int j;
    printf("n=");
    scanf("%f" ,&i);
    j=i;
    if (i==j && i>0){
        printf("natural number");
    }
    else{
        printf(" not natural number");
    }
}