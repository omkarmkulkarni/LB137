/*
Write a program which accept two numbers from user and display position 
of common ON bits from that two numbers.
Input : 10 15 (1010 1111) 
Output : 2 4 
*/

#include <stdio.h>

void CommonBits(unsigned int iNo1, unsigned int iNo2)
{
   unsigned int iMask= 0x00000001, iResult = 0, iSum = 0;
   int i = 0;

   iSum = iNo1 & iNo2;

   for(i = 1; i < 32; i++)
   {
      iResult = iSum & iMask;
      if(iResult == iMask)
      {
         printf("%d\t", i);
      } 
      iMask <<= 1;
   }
}

int main()
{
    unsigned int iValue1 = 0, iValue2 = 0;
    int iRet = 0;
    printf("Enter number\n");
    scanf("%u", &iValue1);
    printf("Enter number\n");
    scanf("%u", &iValue2);
    CommonBits(iValue1, iValue2);
    return 0;
}