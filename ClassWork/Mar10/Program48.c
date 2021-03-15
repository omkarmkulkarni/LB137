/*
Input : 5
Output : * # * # * # * # * # 
Input : 9
Output : * * * * * * * * *
*/
#include <stdio.h>
void Pattern(unsigned int iNo, char c)
{
    printf("\n");
    for (int i = 1; i <= iNo; i++)
    {
        printf("%c\t",c);
    }
    printf("\n");
}

int main()
{
  unsigned int  iValue = 0;
  char cValue = '\0';

  printf("Enter number \n");
  scanf("%u", &iValue);
  printf("Enter char \n");
  scanf(" %c", &cValue);
  Pattern(iValue, cValue);
  return 0;
}