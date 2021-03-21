/*
Accept N numbers from user and return frequency of even numbers. 
Input : N : 6 
 Elements : 85 66 3 80 93 88 
Output : 3 
*/

#include <stdio.h>
#include <stdlib.h>

int CountOfEvenNos(int Arr[], int iSize)
{
    int iCount = 0, i = 0;
    if((Arr == NULL) || (iSize <= 0))
    {
        return -1;
    }
    for ( i = 0; i < iSize; i++)
    {
        if(Arr[i] %2 == 0)
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

    iRet = CountOfEvenNos(arr, iLength);
    printf("Count of even nos = %d",iRet );
    free(arr);

    return 0;
}