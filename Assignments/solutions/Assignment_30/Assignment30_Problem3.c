// 3. Write a program which accept one number from user and check whether
// 9th or 12th bit is on or off.
// Input : 257
// Output : TRUE

typedef int BOOL;
typedef unsigned int UINT;

#include<stdio.h>
#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
   UINT iMask1 = 0x00000100, iMask2 = 0x00000800;
   UINT iResult1 = 0, iResult2 = 0;


   iResult1 = iNo & iMask1; 
   iResult2 = iNo & iMask2; 

   if((iResult1 == iMask1) || (iResult2 == iMask2))
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
       printf("9th or 12th bit is ON");
   }
   else
   {
       printf("9th or 12th is OFF");
   }

   return 0;
}