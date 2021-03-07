// Accept number and display factors of that number
//Input: 12
//Output: 1 2 3 4 5 6

//Input: 20
//Output: 1 2 4 5 10
#include <stdio.h>
void DisplayFactor(int iNo)
{
    int i = 0;
    if(iNo < 0)
    { 
        iNo = -iNo;
    }
    for(i = 1; i< iNo ;i++)
    {
        if(iNo % i == 0)
        {
            printf("%d ",i);
        }
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);
    DisplayFactor(iValue);
    return 0;
}