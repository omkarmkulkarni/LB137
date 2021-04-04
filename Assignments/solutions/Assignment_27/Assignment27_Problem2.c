// 2. Write a program which checks whether 5th & 18th bit is On or OFF.
// Solution :

typedef int BOOL;
typedef unsigned int UINT;

#include<stdio.h>
#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
   UINT iMask = 0x00020010;
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
       printf("5th and 18th bit is ON");
   }
   else
   {
       printf("5th and 18th is OFF");
   }

   return 0;
}