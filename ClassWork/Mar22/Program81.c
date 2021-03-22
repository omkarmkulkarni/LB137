//Accept the string from user and return length of the file.

#include <stdio.h>

int strlenX(char str[])
{
    int iCnt = 0;
    while (*str != '\0')
    {
        printf("%d : %c : %d\n", iCnt, *str, *str);
        iCnt++;
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[10], iRet =0;
    printf("Enter your name\n");
    //scanf("%[^'\n']s", Arr);
    //gets(Arr);
    //scanf("%s", Arr);
    fgets(Arr, 40, stdin);
    
    iRet = strlenX(Arr);
    printf("%d\n", iRet);
    return 0;
}