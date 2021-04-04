// 5. Write a program which accept one number from user and toggle contents
// of first and last nibble of the number. Return modified number. (Nibble is a
// group of four bits)


typedef unsigned int UINT;
#include<stdio.h>

UINT ToggleBit(UINT iNo)
{
   UINT iMask = 0x99999999;
   UINT iResult = 0;

   iResult = iNo ^ iMask; 
   
   return iResult;
}

int main()
{
   UINT iValue = 0, iRet = 0;
   
   printf("Enter a number: \n");
   scanf("%u", &iValue);

   iRet = ToggleBit(iValue);
   
   printf("Modified number is : %u\n", iRet);

   return 0;
}