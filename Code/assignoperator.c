/* Assignment Operators; short han operators
=
+=
-=
*=
/=
%=
*/

#include<stdio.h>

int main(){
    int a=1, b=9, c=3, d=4;

    printf("%d\n", c*d);

    a+=b; //a= a+b
    printf("%d\n", a);
    // a become a = 10

    a*=b; //a= a*b
    printf("%d\n", a);
    // a become a =90

    b-=c; //b=b-c
    printf("%d\n", b);

    b/=c; //b=b/c
    printf("%d\n", b);

    return 0;

}