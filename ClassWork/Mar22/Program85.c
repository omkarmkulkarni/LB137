//Accept the string from user and return length of the file.

#include <stdio.h>

int CountSmallLetters(char str[])
{
    int iCnt = 0;
    if(str == NULL)
    {
        return 0;
    }
    while (*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[10], iRet =0;
    printf("Enter string\n");
    scanf("%[^'\n']s", Arr);
    //gets(Arr);
    //scanf("%s", Arr);
    //fgets(Arr, 40, stdin);
    
    iRet = CountSmallLetters(Arr);
    printf("%d\n", iRet);
    return 0;
}