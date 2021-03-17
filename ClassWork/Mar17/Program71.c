//Accept N Nos from user and input 1 more no and find frequency of the number

#include <stdio.h>
#include <stdlib.h>

int FrequencyOfNo(int Arr[], int iSize, int iNoSearch)
{
    int iCount = 0, i = 0;
    if((Arr == NULL) || (iSize <= 0))
    {
        return -1;
    }
    for ( i = 0; i < iSize; i++)
    {
        if(Arr[i] == iNoSearch)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int *arr = NULL;
    int iLength =0, i = 0; 
    int iRet = 0;
    int iNo = 0;
    
    printf ("Input no of elements\n");
    scanf("%d", &iLength);

    printf ("Input search element\n");
    scanf("%d", &iNo);

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

    iRet = FrequencyOfNo(arr, iLength, iNo);
    printf("Count of %d in provided array = %d",iNo,iRet );
    free(arr);

    return 0;
}