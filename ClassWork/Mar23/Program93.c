/* accept input string and display reverse */

#include <stdio.h>

void Reverse(char str[])
{
    char *start, *end;
    char temp;
    if(str == NULL)
    {
        return;
    }

    start = str;
    end = str;

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while (start<end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
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
    
    Reverse(Arr);

    printf("%s", Arr);
    return 0;
}