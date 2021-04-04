// 4. Write a program which accept one number , two positions from user and
// check whether bit at first or bit at second position is ON or OFF.
// Input : 10 3 7
// Output : FALSE
// Input : 10 4 7
// Output : TRUE

typedef int BOOL;
typedef unsigned int UINT;

#include<stdio.h>
#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo, int iPos1, int iPos2)
{
   UINT iMask1 = 0x00000001, iMask2 = 0x00000001;
   UINT iResult1 = 0, iResult2 = 0;

    if((iPos1 < 1) || (iPos1 > 32) || (iPos2 < 1) || (iPos2 >32))
   {
      return FALSE;
   }

   iMask1 <<= (iPos1 - 1);
   iMask2 <<= (iPos2 - 1);

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
   unsigned int iValue = 0, iPos1 = 0, iPos2 = 0;
   BOOL bRet = FALSE;

   printf("Enter a number: \n");
   scanf("%u", &iValue);

   printf("Enter first position: \n");
   scanf("%u", &iPos1);

   printf("Enter second position: \n");
   scanf("%u", &iPos2);
   
   bRet = ChkBit(iValue, iPos1, iPos2);

   if(bRet == TRUE)
   {
       printf("Bit at position %u or %u is ON", iPos1, iPos2);
   }
   else
   {
       printf("Bit at position %u or %u is OFF", iPos1, iPos2);
   }

   return 0;
}