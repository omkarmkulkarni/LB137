#include <stdio.h>
#include <stdlib.h>

int FirstOccurringIndex(int Arr[], int iLength, int iNo) 
{ 
    int iIndex = -1, i = 0;
    if((Arr == NULL) || (iLength <= 0))
    {
        return -1;
    }
    for ( i = 0; i < iLength; i++)
    {
        if(Arr[i] == iNo)
        {
            iIndex = i;
            break;
        }
    }
    return iIndex + 1;
}

int main()
{
    int iSize = 0,iRet = 0,iCnt = 0, iValue = 0; 
    int *p = NULL; 
    //Kiti Number
    printf("Enter number of elements\n"); 
    scanf("%d",&iSize); 
    //Allocate Memory
    p = (int *)malloc(iSize * sizeof(int)); 
    if(p == NULL) 
    { 
        printf("allocate memory not possible"); 
        return -1; 
    } 
    //Accept N numbers
    printf("Enter %d elements \n",iSize); 
    for(iCnt = 0;iCnt<iSize; iCnt++) 
    { 
        printf("Enter element %d:",iCnt+1); 
        scanf("%d",&p[iCnt]); 
    }
    //Konta number search karaycha
    printf("Enter the number to search \n"); 
    scanf("%d",&iValue);

    iRet = FirstOccurringIndex(p, iSize, iValue);
    if(iRet == -1) 
    { 
        printf("There is no such number in array"); 
    } 
    else 
    { 
        printf("Index Of First occurrence of number %d is %d",iValue, iRet); 
    }

    //free memory <--> IMPORTANT
    free(p);
    return 0;
}