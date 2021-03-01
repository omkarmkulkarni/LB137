// accept number from user and display table of that number
#include <stdio.h>
void DisplayTable(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for (int iCnt = 1; iCnt <=10; iCnt++)
    {
        printf("%d ", iCnt*iNo);
    }
}
int main()
{
    int iValue = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    DisplayTable(iValue);
    return 0;
} 