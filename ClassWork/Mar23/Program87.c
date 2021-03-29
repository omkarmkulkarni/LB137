/* accept input string and convert it into lower case */

#include <stdio.h>

void strlwrX(char str[])
{
    if(str == NULL)
    {
        return;
    }
    while (*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }
        str++;
    }
}
int main()
{
    char Arr[10], iRet =0;
    printf("Enter string\n");
    scanf("%[^'\n']s", Arr);
    //gets(Arr);
    //scanf("%s", Arr);
    //fgets(Arr, 40, stdin);
    
    strlwrX(Arr);

    printf("%s", Arr);
    return 0;
}