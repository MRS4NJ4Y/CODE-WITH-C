#include<stdio.h>

int main(){

    char a;
    int i;
    int j;

    printf("select option from list\n a. Know travel location\n b. Known festival names\n");
    scanf(" %c", &a);

    switch (a) {
        
        case 'a':
            printf("enter date from list for travel:\n 1. Monday\n 2. Tuesday\n 3. Wednesday\n 4. Thursday\n 5. Friday\n 6. Saturday\n 7. Sunday\n");
            scanf("%d", &i);
            
            switch (i) {
                case 1:
                    printf("Delhi\n");
                    break;
                case 2:
                    printf("Bihar\n");
                    break;
                case 3:
                    printf("Siwan\n");
                    break;
                case 4:
                    printf("Tamil Nadu\n");
                    break;
                case 5:
                    printf("MP\n");
                    break;
                case 6:
                    printf("Punjab\n");
                    break;
                case 7:
                    printf("Rest\n");
                    break;
                default:
                    printf("Invalid date\n");
                    break;
            }
            break; // Break added here
        
        case 'b':
            printf("enter month number from list for known festival names:\n 1. January\n 2. February\n 3. March\n 4. April\n 5. May\n 6. June\n 7. July\n 8. August\n 9. September\n 10. October\n 11. November\n 12. December\n");
            scanf("%d", &j);

            switch (j) {
                case 1:
                    printf("Republic Day (January 26)\n");
                    break;
                case 2:
                    printf("Vasant Panchami (February 14)\n");
                    break;
                case 3:
                    printf("Holi (March 25)\n");
                    break;
                case 4:
                    printf("Ram Navami (April 17)\n");
                    break;
                case 5:
                    printf("Technology Day (May 11)\n");
                    break;
                case 6:
                    printf("Vat Savitri Puja (June 6)\n");
                    break;
                case 7:
                    printf("Doctors Day (July 01)\n");
                    break;
                case 8:
                    printf("Krishna Janamashtami (August 26)\n");
                    break;
                case 9:
                    printf("Engineers Day (September 15)\n");
                    break;
                case 10:
                    printf("Dussehra (October 12) & Diwali (October 31)\n");
                    break;
                case 11:
                    printf("Chhath Puja (November 8)\n");
                    break;
                case 12:
                    printf("Christmas Day (December 25)\n");
                    break;
                default:
                    printf("Invalid month\n");
                    break;
            }
            break; // Break added here
        
        default:
            printf("Invalid option\n");
            break;
    }
 
    return 0;
}
