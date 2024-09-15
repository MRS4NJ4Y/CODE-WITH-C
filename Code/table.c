#include<stdio.h>
#include<conio.h>

int main(){
 int n, i;
 printf("enter a number: ");
 scanf("%d",&n);
 for(i=1; i<=10; i++){
    printf("%d\n",n*i);
 }

    getch();
    return 0;
}