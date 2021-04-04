// Complete below code snippets it contains only service provider
// function.
// Write entry point function to call below helper functions
// separately.

// 1.Write a program which accept one number and position from user and
// check whether bit at that position is on or off. If bit is one return TURE
// otherwise return FALSE.
// Input : 10 2
// Output : TRUE


typedef int BOOL;
typedef unsigned int UINT;

#include<stdio.h>
#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo, int iPos)
{
   unsigned int iMask = 0x0000001;
   unsigned int iResult = 0;

   if((iPos < 1) || (iPos > 32))
   {
      return FALSE;
   }

   iMask <<= (iPos - 1);
   
   iResult = iNo & iMask; 
   
   if(iResult == iMask)
   {
      return TRUE;
   }
   else 
   {
      return FALSE;
   }
}

int main()
{
   UINT iValue = 0, iPos = 0;
   BOOL bRet;
   printf("Enter a number: \n");
   scanf("%u", &iValue);

   printf("Enter position: \n");
   scanf("%u", &iPos);

   bRet = ChkBit(iValue,iPos);
   
   if(bRet == TRUE)
   {
      printf("The bit is ON");
   }
   else
   {
      printf("The bit is OFF");
   }

   return 0;
}