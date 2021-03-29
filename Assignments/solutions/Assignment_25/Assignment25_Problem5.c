// 5. Write a program which accept string from user reverse that string
// in place.
// Input    : “abcd”
// Output   : “dcba”
// Input    : “abba”
// Output   : “abba”

#include<stdio.h>

void StrRevX(char *str)
{
   char *start, *end;

   if(str == NULL)
   {
      return;
   }

   start = str;
   end = str;

   while(*end != '\0')
   {
      end++;
   }
   end--;

   while(start < end)
   {
      char temp = *start;
      *start = *end;
      *end = temp;
      *end--;
      *start++;
   }
}

int main()
{
   char arr[20];

   printf("Enter string: ");
   scanf("%[^'\n']s",arr);

   StrRevX(arr);

   printf("Modified string is %s.",arr);
   
   return 0;
}