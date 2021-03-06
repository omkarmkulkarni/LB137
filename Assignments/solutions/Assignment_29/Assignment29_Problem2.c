// 2. Write a program which accept one number and position from user and off
// that bit. Return modified number.
// Input : 10 2
// Output : 8


typedef unsigned int UINT;
#include<stdio.h>

UINT OffBit(UINT iNo, int iPos)
{
   UINT iMask = 0x0000001;
   UINT iResult = 0;

   if((iPos < 1) || (iPos > 32))
   {
      return 0;
   }

   iMask <<= (iPos - 1);

   iMask = ~iMask;

   iResult = iNo & iMask; 
   
   return iResult;
}

int main()
{
   UINT iValue = 0, iPos = 0, iRet = 0;
   
   printf("Enter a number: \n");
   scanf("%u", &iValue);

   printf("Enter position: \n");
   scanf("%u", &iPos);

   iRet = OffBit(iValue,iPos);
   
   printf("Modified number is : %u\n", iRet);

   return 0;
}