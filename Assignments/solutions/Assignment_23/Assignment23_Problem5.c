// 5. Write a program which accept string from user and display it in
// reverse order.
// Input    : “MarvellouS”
// Output   : “SuollevraM”

#include<stdio.h>

void Reverse(char *str)
{
   if(str == NULL)
   {
      return;
   }

   int iCnt = 0;

   while(*str != '\0')
   {
      iCnt++;
      str++;
   }
   
   str--;

   while(iCnt != 0)
   {
      printf("%c",*str);
      iCnt--;
      str--;
   }

}

int main()
{
    char arr[20];
    
    printf("Enter string: ");
    scanf("%[^'\n']s",arr);
    
    Reverse(arr);

    return 0;
}