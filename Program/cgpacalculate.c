#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char ch;
    int i, grade[5];
    float credit[5], gpa = 0.0, totCredit = 0.0;
    const char* subjects[] = {"Chemistry", "Mathematics", "Physics", "FOC", "EGD"};

    printf("THIS PROGRAM DISPLAYS THE TRANSCRIPT OF THE RECORD OF A STUDENT AS INPUTTED\n");
    for (i = 0; i < 5; i++) {
        /* get the grade and credits from the user */
        printf("\n%s (Enter The Grade (in cap) and Credit): ", subjects[i]);
       ch = (char)getchar();
        grade[i] = ch;
        scanf("%f", &credit[i]);
        getchar();  // to consume the newline character left by scanf
    }

    /* print the input grades and credits */
    printf("PROJECT MADE BY : SANJAY KUMAR\n");
    printf("COLLEGE : RUNGTA COLLAGE OF ENGINEERINT & TECHNOLOGY\n");
    printf("\n=========================================");
    printf("\n          TRANSCRIPT OF STUDENT          ");
    printf("\n=========================================");
    printf("\n Subject         |   Grade    |      Credit\n");
    for (i = 0; i < 5; i++) {
        printf(" %-15s |      %c     |        %.0f\n", subjects[i], grade[i], credit[i]);
    }

    /* To calculate the GPA value */
    for (i = 0; i < 5; i++) {
        switch (grade[i]) {
            case 'A':
            case 'a':
                gpa += 5.0f * credit[i];  // cast double to float
                totCredit += credit[i];
                break;
            case 'B':
            case 'b':
                gpa += 4.0f * credit[i];  // cast double to float
                totCredit += credit[i];
                break;
            case 'C':
            case 'c':
                gpa += 3.0f * credit[i];  // cast double to float
                totCredit += credit[i];
                break;
            case 'D':
            case 'd':
                gpa += 2.0f * credit[i];  // cast double to float
                totCredit += credit[i];
                break;
            case 'F':
            case 'f':
                gpa += 1.0f * credit[i];  // cast double to float
                totCredit += credit[i];
                break;
            default:
                printf("Given Wrong grade!!\n");
                exit(0);
        }
    }

    printf("\n  Total credits are: %.2f", totCredit);
    gpa = gpa / totCredit;
    printf("\n  Your GPA is: %.2f\n", gpa);
    return 0;
}