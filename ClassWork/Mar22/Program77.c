/*
    Create static char array in main function
    accept the string into that array
    Pass that string to the function
    Function will perform the operation on that string
*/

#include <stdio.h>

int main()
{
    char Arr[10];
    printf("Enter your name\n");
    //scanf("%[^'\n']s", Arr);
    //gets(Arr);
    //scanf("%s", Arr);
    fgets(Arr, 40, stdin);
    printf("Your name is : %s\n", Arr);
    return 0;
}