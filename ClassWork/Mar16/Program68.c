// Accept n nos from user and display only even nos.

#include <stdio.h>
#include <stdlib.h>

void DisplayEven(int Arr[], int size)
{
    int i = 0;
    if((Arr == NULL) || (size <= 0))
    {
        return;
    }
    printf ("Even numbers are : \n");
    for ( i = 0; i < size; i++)
    {
        if(Arr[i] % 2 == 0)
        {
            printf("%d\n", Arr[i]);
        }
    }
}

void DisplayOdd(int Arr[], int size)
{
    int i = 0;
    printf ("Odd numbers are : \n");
    for ( i = 0; i < size; i++)
    {
        if(Arr[i] % 2 != 0)
        {
            printf("%d\n", Arr[i]);
        }
    }
}

int main()
{
    int *arr = NULL;
    int iLength =0, i = 0;
    
    printf ("Input no of elements\n");
    scanf("%d", &iLength);

    arr = (int*)malloc(sizeof(int));
    if(arr == NULL)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }
    printf("Input elements\n");
    for (i = 0; i < iLength; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    DisplayEven(arr, iLength);
    DisplayOdd(arr, iLength);
    free(arr);

    return 0;
}