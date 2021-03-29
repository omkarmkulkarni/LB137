// 2.Write a program which accept string from user and convert it into
// upper case.
// Input    : “Marvellous Multi OS”
// Output   : MARVELLOUS MULTI OS

#include<stdio.h>

void struprX(char *str)
{
   if(str == NULL)
   {
      return;
   }

   while(*str != '\0')
   {
      if((*str >= 'a') && (*str <= 'z'))
      {
         *str -= 32;
      }
      str++;
   }
}

int main()
{
   char arr[20];
   printf("Enter a String: ");
   scanf("%[^'\n']s", arr);        

   struprX(arr);            
   printf("Modified String is: %s\n", arr);

   return 0;
}