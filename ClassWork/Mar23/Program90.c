/* accept input string and display reverse */

#include <stdio.h>

void Display(char str[])
{
    
    if(str == NULL)
    {
        return;
    }

    int strLen = 0;

    while (*str != '\0')
    {
        strLen++;
        str++;
    }

    for (int i = strLen; i >= 0; i--)
    {
        printf("%c", *str);
        str--;
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
    
    Display(Arr);

    printf("%s", Arr);
    return 0;
}