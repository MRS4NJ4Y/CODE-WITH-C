#include<stdio.h>
#include<stdio.h>

int main(){
    char ch;
    printf("enter character: ");
    scanf("%c",&ch);
    if(ch >='A' && ch <='Z'){
        printf("uppercase\n");
    } else if(ch>='a' && ch<='z'){
        printf("lowercase\n");
    }else{
        printf("invalid character\n");
    }


    return 0;
}