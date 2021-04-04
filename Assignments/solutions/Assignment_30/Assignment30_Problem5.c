// 5. Write a program which accept one number from user and range of
// positions from user. Toggle all bits from that range.
// Input : 897 9 13
// Toggle all bits from position 9 to 13 of input number ie 879.

typedef unsigned int UINT;

#include<stdio.h>

UINT ToggleBitRange(UINT iNo, int iStart, int iEnd)
{
   UINT iMask = 0x00000001;
   UINT iCnt = 0,iResult = 0;

   if((iStart < 1) || (iStart > 32) || (iEnd < 1) || (iEnd >32) || (iStart > iEnd))
   {
      return 0;
   }

   iMask <<= (iStart - 1); 

   for(iCnt = 0; iCnt <= (iEnd - iStart); iCnt++)
   {
      iNo = (iNo ^ iMask);
      iMask <<= 1;
   }
   return iNo;
}

int main()
{
   UINT iValue = 0, iStart = 0, iEnd = 0, iRet = 0;
   printf("Enter a number: \n");
   scanf("%u", &iValue);

   printf("Enter start position: \n");
   scanf("%u", &iStart);

   printf("Enter End position: \n");
   scanf("%u", &iEnd);

   iRet = ToggleBitRange(iValue,iStart, iEnd);
   
   printf("Upated number is : %u\n", iRet);
  
   return 0;
}