#include<stdio.h>
#include<math.h>
#include<conio.h>

int main(){
float a,b,c,avgs;
printf("enter the value of a b c");
scanf("%f%f%f",&a,&b,&c);
avgs = (a+b+c)/3;
printf("%.2f",avgs);

getch();
return 0;

}