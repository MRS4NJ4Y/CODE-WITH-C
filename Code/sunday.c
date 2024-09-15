// ? print 1(true) or 0(false) for following statements

#include<stdio.h>
#include<math.h>

int main(){
    int sunday=1;
    int snow=1;
    int monday=1;
    int rain=1;
    int x=50;
    printf("%d\n", sunday && snow);
    printf("%d\n", monday || rain);
    printf ("inter a number: ");
    scanf("%d", &x);
    printf("%d\n", x>9 && x<=100);

    return 0;
}