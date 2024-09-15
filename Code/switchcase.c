#include<stdio.h>
#include<math.h>

int main(){
    int choice;
    float radius, side, base,length;

    printf("select option\n, 1.calculate circle area\n, 2.calculate square area\n, 3.calculate retungle area\n");
    scanf("%d",&choice);

        switch (choice)
        {

        case 1:
            printf("enter radius of circle: ");
            scanf("%f", &radius);
            printf("area of circle is: = %.5f\n", M_PI *radius*radius);
            break;

        case 2:
            printf("Enter side value of square: ");
            scanf("%f", &side);
            printf("area of square: = %.5f",side*side);
            break;
        
        case 3:
        printf("Enter length value of retungle\n");
        scanf("%f", &length);
        printf("enter base value of retungle");
        scanf("%f", &base);
        printf("area of retungle is: = %.5f", 2 * (length + base));

        default:
        printf("invalid option please input valid option");      
        
        }

    return 0;

}