/*
Accept N numbers from user and return difference between frequency of 
even number and odd numbers. 
Input : N : 7 
 Elements : 85 66 3 80 93 88 90 
Output : 1 (4 -3)
*/

#include <stdio.h>
#include <stdlib.h>

int Frequency(int Arr[], int iSize)
{
    int iEvenCnt = 0, iOddCnt =0, i = 0;
    if((Arr == NULL) || (iSize <= 0))
    {
        return -1;
    }
    for ( i = 0; i < iSize; i++)
    {
        if(Arr[i] %2 == 0)
        {
            iEvenCnt++;
        }
        else
        {
            iOddCnt++;
        }
    }
    return iEvenCnt - iOddCnt;
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

    iRet = Frequency(arr, iLength);
    printf("Difference between count of even and odd nos = %d",iRet );
    free(arr);

    return 0;
}