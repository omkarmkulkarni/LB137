// 3. Write a program which checks whether 7th & 15th & 21st , 28th bit
// is On or OFF.
// Solution :

typedef int BOOL;
typedef unsigned int UINT;

#include<stdio.h>
#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
   UINT iMask = 0x08104040;
   UINT iResult = 0;

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
   unsigned int iValue = 0;
   BOOL bRet = FALSE;

   printf("Enter a number: \n");
   scanf("%u", &iValue);
   
   bRet = ChkBit(iValue);

   if(bRet == TRUE)
   {
       printf("15th bit is ON");
   }
   else
   {
       printf("15th bit is OFF");
   }

   return 0;
}