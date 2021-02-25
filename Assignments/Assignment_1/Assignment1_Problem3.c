// Program to print 5 to 1 numbers on screen.

#include<stdio.h>
void Display()
{
    int i = 0;
    int j = 5;

   for (i = j; i >=1; i--)
   {
       printf("%d\n", i);
   }
}

int main()
{
    Display();
    return 0;
}