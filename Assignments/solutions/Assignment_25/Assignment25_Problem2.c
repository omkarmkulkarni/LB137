// 2.Write a program which accept string from user and accept one
// character. Return frequency of that character.
// Input :  “Marvellous Multi OS”
//          M
// Output:  2
// Input :  “Marvellous Multi OS”
//          W
// Output:  0

#include<stdio.h>

int CountChar(char *str, char ch)
{
   if(str == NULL)
   {
      return 0;
   }

   int iCnt = 0;

   while(*str != '\0')
   {
      if((ch >= 'A') && (ch <= 'Z'))
      {
         ch += 32;
      }
      
      if((*str >= 'A') && (*str <= 'Z'))
      {
         *str += 32;
      }

      if(*str == ch) 
      {
         iCnt++;
      }
      str++;
   }
   return iCnt;
}

int main()
{
   char arr[20];
   char cValue;
   int iRet = 0;

   printf("Enter a string: ");
   scanf("%[^'\n']s",arr);

   printf("Enter the character: ");
   scanf(" %c",&cValue);

   iRet = CountChar(arr, cValue);

   printf("Character frequency is %d",iRet);

   return 0;
}