// Accept number from user and display all the numbers till that number.
// Input : 8
// Output : 1 2 3 4 5 6 7 8

// Input : -6
// Output : 1 2 3 4 5 6 

/*
    START
        Accept one number as no
        If number is negative then convert it to positive
        Create one counter as Cnt and set it to 1
        
        Iterate till the counter is less than or equal to the number
            print the value of counter on screen
            Increment the value of counter by 1
        continue
    END
*/
    //1 2 3 4 5
    // Start     1
    // end       5
    //Difference 1

    /*
    printf("1");
    printf("2");
    printf("3");
    printf("4");
    printf("5");
    */

   //1 Initialization
   //2 Condition
   //3 Increment or decrement factor
   //4 Loop body

#include <stdio.h>

void DisplayForward(int iNo)
{
    int iCnt = 0;
    if(iNo < 0) // Input updator
    {
        iNo = -iNo;
    }

   for (iCnt = 1; iCnt <= iNo; iCnt++)
   {
       printf("%d\n", iCnt);
   }
   //1 (2 4 3) (2 4 3) (2 4 3) (2 4 3) (2 4 3) 2 STOP
   //
   //Output : 1      2       3     4     5
}

void DisplayBackward(int iNo)
{
    int iCnt = 0;
    if(iNo == 0) // Input filter
    {
        return;
    }

    if(iNo < 0) // Input updator
    {
        iNo = -iNo;
    }

   for (iCnt = iNo; iCnt >=1; iCnt--)
   {
       printf("%d\n", iCnt);
   }
   //1 (2 4 3) (2 4 3) (2 4 3) (2 4 3) (2 4 3) 2 STOP
   //
   //Output : 1      2       3     4     5
}

int main() // Entry point function
{
    int iValue = 0;

    printf("Enter the number\n");
    scanf("%d", &iValue);
    printf("\n");
    DisplayForward(iValue);
    printf("\n");
    DisplayBackward(iValue);
    return 0;
}