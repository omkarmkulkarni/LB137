// 5. Write a program which accept one number from user and on its first 4
// bits. Return modified number.
// Input : 73
// Output : 79

#include<stdio.h>
typedef unsigned int UINT;

UINT OnBit(UINT iNo)
{
   UINT Result = 0, iMask = 0X0000000F;
   Result = iNo | iMask;
   return Result; 
}

int main()
{
  UINT iValue = 0, iRet = 0;

   printf("Enter a number: \n");
   scanf("%u", &iValue);
   
   iRet = OnBit(iValue);

   printf("The modified number is: %u",iRet);

   return 0;
}