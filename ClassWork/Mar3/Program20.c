//Accept number from user and return addition of the digits
//Input: 7521
//Output: 1
//        2
//        5
//        7

#include <stdio.h>

int SumDigits(int iNo)
{
    int iDigit = 0;
    int iSum = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo > 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
    }
    
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter number\n");
    scanf("%d", &iValue);

    iRet = SumDigits(iValue);
    printf ("Sum is: %d\n", iRet);
    return 0;
}