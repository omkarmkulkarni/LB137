/*
Write a program which accept number from user and return smallest digit
digits.
Input : 751
Output : 157
Input : 226
Output : 622
Input : -9886
Output : 6889
*/

#include<stdio.h>

int MinDigit(int iNo)
{
    int iDigit = 0;
    int iMinDigit = 9;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit < iMinDigit)
        {
            iMinDigit = iDigit;
        }
        iNo = iNo / 10;
    }
    return iMinDigit;
}

int main()
{ 
    int iValue = 0;
    int iRet = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    iRet = MinDigit(iValue);
    printf("%d",iRet);

    return 0;
}