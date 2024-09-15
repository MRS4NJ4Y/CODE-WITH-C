#include <stdio.h>

int main() {
    int n, j, x, y=0;

    for (n = 1; n <= 200; n++) {
        y =0;
        for (j=n ; j>0 ; j/=10) {  
            x=j%10;
            y+=x*x*x;
        }
            if(y==n){
                printf("%d\n", y);
        }
    }

    return 0;
}
