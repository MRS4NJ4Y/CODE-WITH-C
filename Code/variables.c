// Variable is the name of a memory
// location which stores some data.

/*
ariables Rules :-
a. Variables are case sensitive
b. 1st character is alphabet or '_'
c. no comma/blank space
d. No other symbol other than '_'
e. its values are not fix
*/

#include<stdio.h>
#include<math.h>

    int main(){

    int num = 10;
    int Num =20;
    int _num = 30;
    float pi = 3.14f;
    float result = (float)num+(float)Num+(float)_num+pi;
    
    printf("sum of the number is = %.4f", result);
    
    return 0;

}