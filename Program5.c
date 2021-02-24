// Accept number from user and return addition of all numbers.
// Input : 4
// Output : 10 (1+2+3+4)

// Input : -6
// Output : 21 (1+2+3+4+5+6)

#include <stdio.h>

int Sum(int iNum)
{
    int iCnt = 0;
    int iAns = 0;
    if(iNum == 0) // Input filter
    {
        return 0;
    }

    if(iNum < 0) // Input updator
    {
        iNum = -iNum;
    }

   for (iCnt = 0; iCnt <=iNum; iCnt++)
   {
       iAns = iAns + iCnt;
   }

   return iAns;
}

int main() // Entry point function
{
    int iNo = 0;
    int iRet = 0;

    printf("Enter the number\n");
    scanf("%d", &iNo);
    printf("\n");
    iRet = Sum(iNo);

    printf("Addition is : %d\n", iRet);

}
