#include<stdio.h>

int main (){
    char abc;
    printf("Enter a character: ");
    scanf("%c", &abc);

    if (abc >= 'A' && abc <= 'Z')
    {
        printf("%c is an uppercase letter", abc);
    }
    else if (abc >= 'a' && abc <= 'z')
    {
        printf("%c is a lowercase letter", abc);
    }
    else {
        printf("%c is not an alphabet", abc);
    }

    // if ((abc >= 65) && (abc <= 90))
    // {
    //     printf("%c is an uppercase letter", abc);
    // }
    // else if ((abc >= 97) && (abc <= 122))
    // {
    //     printf("%c is a lowercase letter", abc);
    // }
    // else{
    //     printf("%c is not an alphabet", abc);
    // }

    return 0;
}