// Accept n nos from user and display sum of even nos.

#include <stdio.h>
#include <stdlib.h>

int SumOfEvenNos(int Arr[], int iSize)
{
    int iSum = 0, i = 0;
    if((Arr == NULL) || (iSize <= 0))
    {
        return -1;
    }
    for ( i = 0; i < iSize; i++)
    {
        if(Arr[i] %2 == 0)
        {
            iSum = iSum + Arr[i];
        }
    }
    return iSum;
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

    iRet = SumOfEvenNos(arr, iLength);
    printf("Addition of nos = %d",iRet );
    free(arr);

    return 0;
}