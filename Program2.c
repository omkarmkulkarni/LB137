//Accept 2 numbers from user and return the maximum and minimum number.

/*
Algorithm
    START
        Accept first number as no1
        Accept second number as no2

        If no1 is greater than no2
            then no1 is maximum
        otherwise
            no2 is maximum
    STOP
*/

// include the user defined file
#include "Header2.h"
int main()
{
    int iNo1 = 0;
    int iNo2 = 0;
    int iRetMax = 0;
    int iRetMin = 0;

    printf("Enter first number\n");
    scanf("%d", &iNo1);

    printf("Enter first number\n");
    scanf("%d", &iNo2);

    iRetMax = Maximum(iNo1,iNo2);
    iRetMin = Minimum(iNo1,iNo2);

    printf("Maximum number is : %d\n", iRetMax);
    printf("Minimum number is : %d\n", iRetMin);
    return 0;
}