// 3.Write a program which accept string from user and toggle the case.
// Input    : “Marvellous Multi OS”
// Output   : mARVELLOUS mULTI os

#include<stdio.h>

void strtoggleX(char str[])
{
   if(str == NULL)
   {
      return;
   }

   while(*str != '\0')
   {
      if((*str >= 'A') && (*str <= 'Z'))
      {
         *str += ('a' - 'A');
      }
      else if((*str >= 'a') && (*str <= 'z'))
      {
         *str -= ('a' - 'A');
      }
      str++;
   }
}

int main()
{
   char arr[20];
   printf("Enter a String: ");
   scanf("%[^'\n']s", arr);        

   strtoggleX(arr);            
   printf("Modified String is: %s\n", arr);

   return 0;
}