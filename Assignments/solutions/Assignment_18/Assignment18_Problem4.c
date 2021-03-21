/*
Accept N numbers from user and return frequency of 11 form it. 
Input : N : 6 
 Elements : 85 66 3 15 93 88 
Output : 0 
Input : N : 6 
 Elements : 85 11 3 15 11 111 
Output : 2
*/

#include <stdio.h>
#include <stdlib.h>

int CountOf11(int Arr[], int iSize)
{
    int iCount = 0, i = 0;
    if((Arr == NULL) || (iSize <= 0))
    {
        return -1;
    }
    for ( i = 0; i < iSize; i++)
    {
        if(Arr[i] == 11)
        {
            iCount++;
        }
    }
    return iCount;
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

    iRet = CountOf11(arr, iLength);
    printf("Count of 11s in array = %d",iRet );
    free(arr);

    return 0;
}