#include <stdio.h>

void Display(char str[])
{
    int iCnt = 0;
    printf("Characters from string are\n");
    for(iCnt =0; str[iCnt] != '\0'; iCnt++)
    {
        printf("%c\n", str[iCnt]);
    }
    
}

int main()
{
    char Arr[10];
    printf("Enter your name\n");
    //scanf("%[^'\n']s", Arr);
    //gets(Arr);
    //scanf("%s", Arr);
    fgets(Arr, 40, stdin);
    
    Display(Arr);
    return 0;
}