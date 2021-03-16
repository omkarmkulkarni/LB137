// Accept n nos from user and display only even nos.

#include <stdio.h>
#include <stdlib.h>

void DisplayEven(int Arr[], int size)
{
    int i = 0;
    printf ("Even numbers are : \n");
    for ( i = 0; i < size; i++)
    {
        if(Arr[i] % 2 == 0)
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

    printf("Input elements\n");
    for (i = 0; i < iLength; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    DisplayEven(arr, iLength);
    free(arr);

    return 0;
}