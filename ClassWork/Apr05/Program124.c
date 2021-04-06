//addition of n numbers

#include <stdio.h>
#include <stdlib.h>

int SumOfNNumbers(int Arr[], int iSize)
{
    int iSum = 0, i = 0;
    if((Arr == NULL) || (iSize <= 0))
    {
        return -1;
    }
    for ( i = 0; i < iSize; i++)
    {

            iSum = iSum + Arr[i];
    }
    
    return iSum;
}

int main()
{
    int *arr = NULL;
    int iLength =0, i = 0; 
    int iRet = 0;
    
    printf ("Input no of elements\n");
    scanf("%d", &iLength);

    arr = (int*)malloc(sizeof(int));
    if(arr == NULL)
    {
        printf("Cant allocate the memory\n");
        return -1;
    }
    printf("Input elements\n");
    for (i = 0; i < iLength; i++)
    {
        scanf("%d", &arr[i]);
    }
    iRet = SumOfNNumbers(arr, iLength);
    printf("Sum of N Numbers = %d", iRet);

    free(arr);
    return 0;
}