//Accept N Nos from user and input 1 more no and find first occurence of the number

#include <stdio.h>
#include <stdlib.h>

int FirstOccurence(int Arr[], int iSize, int iNoSearch)
{
    int iIndex = -1, i = 0;
    if((Arr == NULL) || (iSize <= 0))
    {
        return -1;
    }
    for ( i = 0; i < iSize; i++)
    {
        if(Arr[i] == iNoSearch)
        {
            iIndex = i;
            break;
        }
    }

    if(iIndex == -1)
    {
        return -1;
    }

    return iIndex;
}

int FirstOccurence1(int Arr[], int iSize, int iNoSearch)
{
    int i = 0;
    if((Arr == NULL) || (iSize <= 0))
    {
        return -1;
    }
    for ( i = 0; i < iSize; i++)
    {
        if(Arr[i] == iNoSearch)
        {
            break;
        }
    }
    if(i == iSize)
    {
        return -1;
    }
    else
    {
        return i;
    }
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

    printf ("Input search element\n");
    scanf("%d", &iNo);
    iRet = FirstOccurence(arr, iLength, iNo);
    if(iRet == -1)
    {
        printf("No Occurrence");
    }
    else
    {
        printf("%d", iRet);
    }

    free(arr);
    return 0;
}