// Complete below code snippets it contains only service provider
// function.

// Write entry point function to call below helper functions
// separately.

// 1.Write a program which accept one number from user and off 7th bit of that
// number if it is on. Return modified number.
// Input : 79
// Output : 15


#include<stdio.h>
typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
   UINT Result = 0, iMask = 0XFFFFFFBF;
   Result = iNo & iMask;
   return Result; 
}

int main()
{
  UINT iValue = 0, iRet = 0;

   printf("Enter a number: \n");
   scanf("%u", &iValue);
   
   iRet = OffBit(iValue);

   printf("The modified number is: %u",iRet);

   return 0;
}