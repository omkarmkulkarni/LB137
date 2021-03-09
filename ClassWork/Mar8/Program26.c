/*
Write a program which accept number from user and return reverse no
digits.
Input : 751
Output : 157
Input : 226
Output : 622
Input : -9886
Output : 6889
*/

#include<stdio.h>

int Reverse(int iNo)
{
    int iDigit = 0;
    int iRev = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo > 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
    }
    return iRev;
}

int main()
{ 
    int iValue = 0;
    int iRet = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    iRet = Reverse(iValue);
    printf("%d",iRet);

    return 0;
}