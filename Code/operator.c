//Comparison operators (==, !=, <, >, <=, >=) are separated correctly.
//if condition true then output = 1 else 0

#include<stdio.h>

int main(){
    printf("7 == 7 = %d\n", 7 == 7); 
    printf("7 == 5 = %d\n", 7 == 5); 
    printf("7 < 7 = %d\n", 7 < 7); 
    printf("7 > 7 = %d\n", 7 > 7);
    printf("7 >= 7 = %d\n", 7 >= 7);
    printf("7 <= 7 = %d\n", 7 <= 7);
    printf("7!= 7 = %d\n", 7!= 7);

    //  (!=) called not equal oprater

    printf("7 != 7 = %d\n", 7 != 7); 
    printf("7 != 5 = %d\n", 7 != 5); 
    printf("7 > !7 = %d\n", 7 > !7); 
    printf("7 >= !7 = %d\n", 7 >= !7); 
    printf("7 < !7 = %d\n", 7 < !7); 
    printf("7 <= !7 = %d\n", 7 <= !7);
    

    // AND Logical operators (&&) are used correctly to combine conditions. 
    
    printf("3 < 7 && 7 > 5 = %d\n", 3 < 7 && 7 > 5);
    printf("3 < 7 && 7 < 5 = %d\n", 3 < 7 && 7 < 5); 
    printf("3 > 7 && 7 > 5 = %d\n", 3 > 7 && 7 > 5);
    printf("3 > 7 && 7 < 5 = %d\n", 3 > 7 && 7 < 5);
    printf("3 < 7 && 7 > 5 && 5<9 && 9>7 = %d\n", 3 < 7 && 7 > 5 && 5<9 && 9>7);

    // OR Logical operators (||) if any one is true then output is true.

    printf("3 < 7 || 7 > 5 = %d\n", 3 < 7 || 7 > 5);
    printf("3 < 7 || 7 < 5 = %d\n", 3 < 7 || 7 < 5); 
    printf("3 > 7 || 7 > 5 = %d\n", 3 > 7 || 7 > 5);
    printf("3 > 7 || 7 < 5 = %d\n", 3 > 7 || 7 < 5);
    printf(" 3 > 7 || 7 < 5 || 5 > 9 || 9 > 7 = %d\n", 3 > 7 || 7 < 5 || 5 > 9 || 9 > 7);

    // NOT OR Logical operators (!) it's exchange true to false and false to true.

    printf("!(9 > 7) = %d\n", !(9 > 7));
    printf("!(9 < 7) = %d\n", !(9 < 7));
    printf("!(3 > 7) && 7 > 5 = %d\n", !(3 > 7) && 7 > 5);
    printf("!(3 > 7) || 7 < 5 = %d\n", !(3 > 7) || 7 < 5);
    printf("!((3 < 7) || 7 > 5) = %d\n", !((3 < 7) || 7 > 5));
    printf("!((3 < 7) || 7 > 5) || 7>5 = %d\n", !((3 < 7) || 7 > 5) || 7>5);

    // example.

    printf("(4+5-3+9*2)<(999+25-5)&&(4<9) = %d\n", (4+5-3+9*2)<(999+25-5)&&(4<9));
    printf("(4+5-3+9*2)<(999+25-5)&&(4>9) = %d\n", (4+5-3+9*2)<(999+25-5)&&(4>9));

    /*  Operator Precendence : it's work series wise.
    Priority  Operator
    1.      !
    2.      *, /, %
    3.      +, -
    4.      <, <=, >, >=
    5.      ==, !=
    6.      &&
    7.      ||
    8.      =
    */
    
    return 0;

}
