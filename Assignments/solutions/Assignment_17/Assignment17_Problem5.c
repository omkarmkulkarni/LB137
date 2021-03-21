/*
Accept N numbers from user and display all such elements which are 
multiples of 11. 
Input : N : 6 
 Elements : 85 66 3 55 93 88 
Output : 66 55 88 
*/

#include <stdio.h>
#include <stdlib.h>

void Display(int Arr[], int iSize)
{
    int i = 0;
    if((Arr == NULL) || (iSize <= 0))
    {
        return;
    }
    for ( i = 0; i < iSize; i++)
    {
        if(Arr[i] % 11 == 0)
        {
            printf("%d\t",Arr[i]);
        }
    }
}

int main()
{
    int *arr = NULL;
    int iLength =0, i = 0, iRet = 0;
    
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

    Display(arr, iLength);
    
    free(arr);

    return 0;
}