// 2. Write a program which accept one number from user and off 7th and 10th
// bit of that number. Return modified number.
// Input : 577
// Output : 1


#include<stdio.h>
typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
   UINT Result = 0, iMask = 0XFFFFFDBF;
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