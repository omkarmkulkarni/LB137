// 4. Write a program which accept string from user and check whether
// it contains vowels in it or not.
// Input    : “marvellous”
// Output   : TRUE
// Input    : “Demo”
// Output   : TRUE
// Input    : “xyz”
// Output   : FALSE

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

void struprX(char str[])
{
   if(str == NULL)
   {
      return;
   }

   while(*str != '\0')
   {
      if((*str >= 'A') && (*str <= 'Z'))
      {
         *str += 32;
      }
      str++;
   }
}

BOOL ChkVowel(char *str)
{
    if(*str == '\0')
    {
        return FALSE;
    }
    
    char *start = str;
    // Following loop converts all the capital alphabets into lower case.
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str += 32;
        }
        str++;
    }
    str = start;                        // sets str to original position
    start = NULL;                       // sets start to NULL
    
    // Checks for presence of vowel.
    while(*str != '\0')
    {
        if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u')
        {
            return TRUE;
            break;
        }
        str++;
    }
    // If now vowel is present then returns FALSE
    if(*str == '\0')
    {
        return FALSE;
    }
}


int main()
{
    char arr[20];
    BOOL bRet = FALSE;
    
    printf("Enter string: ");
    scanf("%[^’\n’]s",arr);

    bRet = ChkVowel(arr);

    if(bRet == TRUE)
    {
        printf("Contains Vowel");
    }
    else
    {
        printf("There is no Vowel");
    }

    return 0;
}