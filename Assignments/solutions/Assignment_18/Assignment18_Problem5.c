/*
Accept N numbers from user and accept one another number as NO , 
return frequency of NO form it. 
Input : N : 6 
 NO: 66 
 Elements : 85 66 3 66 93 88 
Output : 2 
Input : N : 6 
 NO: 12 
 Elements : 85 11 3 15 11 111 
Output : 0 
*/

#include <stdio.h>
#include <stdlib.h>

int Frequency(int Arr[], int iSize, int iValue)
{
    int iCount = 0, i = 0;
    if((Arr == NULL) || (iSize <= 0))
    {
        return -1;
    }
    for ( i = 0; i < iSize; i++)
    {
        if(Arr[i] == iValue)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int *arr = NULL;
    int iLength =0, i = 0, iRet = 0, iNo=0;
    
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

    printf ("Input no to search\n");
    scanf("%d", &iNo);

    iRet = Frequency(arr, iLength, iNo);
    printf("Count of %d in array = %d",iNo, iRet );
    free(arr);

    return 0;
}