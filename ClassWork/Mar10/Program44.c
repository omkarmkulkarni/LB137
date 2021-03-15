/*
Input : 5
Output : * * * * *
Input : 9
Output : * * * * * * * * *
*/
#include <stdio.h>
void Pattern(unsigned int iNo)
{
    printf("\n");
    for (int i = 1; i <= iNo; i++)
    {
        printf("*\t");
    }
    printf("\n");
}

int main()
{
  unsigned int  iValue = 0;

  printf("Enter number \n");
  scanf("%u", &iValue);

  Pattern(iValue);
  return 0;
}