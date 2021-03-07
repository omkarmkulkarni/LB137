//Accept number from user and return addition of the even digits

#include <stdio.h>

int EvenDigits(int iNo)
{
    int iDigit = 0;
    int iEven = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {
            iEven++;
        }
        iNo = iNo / 10;
    }
    
    return iEven;
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter number\n");
    scanf("%d", &iValue);

    iRet = EvenDigits(iValue);
    printf ("Sum of Even digits is: %d\n", iRet);
    return 0;
}