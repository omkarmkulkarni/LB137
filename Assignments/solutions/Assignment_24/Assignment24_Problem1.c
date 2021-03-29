// 1.Write a program which accept string from user and convert it into
// lower case.
// Input    : “Marvellous Multi OS”
// Output   : marvellous multi os

#include<stdio.h>

void strlwrX(char *str)
{
   if(str == NULL)
   {
      return;
   }

   while(*str != '\0')
   {
      if((*str >= 'A') && (*str <= 'Z'))
      {
         *str += 32;
      }
      str++;
   }
}

int main()
{
   char arr[20];
   printf("Enter a String: ");
   scanf("%[^'\n']s", arr);        

   strlwrX(arr);            
   printf("Modified String is: %s\n", arr);

   return 0;
}