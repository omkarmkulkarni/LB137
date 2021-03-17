//Accept N Nos from user and input 1 more no and find min number

#include <stdio.h>
#include <stdlib.h>

int SmallestNumber(int Arr[], int iSize)
{
    int i = 0;
    if((Arr == NULL) || (iSize <= 0))
    {
        return -1;
    }
    int iMin = Arr[0] ;
    for ( i = 0; i < iSize; i++)
    {
        if(Arr[i] < iMin)
        {
            iMin = Arr[i];
        }
    }
    return iMin;
}

int main()
{
    int *arr = NULL;
    int iLength =0, i = 0; 
    int iRet = 0;
    int iNo = 0;
    
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
    iRet = SmallestNumber(arr, iLength);
    printf("Largest Value is %d", iRet);

    free(arr);
    return 0;
}