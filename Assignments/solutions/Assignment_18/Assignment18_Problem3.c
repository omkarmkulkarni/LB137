/*
Accept N numbers from user check whether that numbers contains 11 in 
it or not. 
Input : N : 6 
 Elements : 85 66 11 80 93 88 
Output : 11 is present 
Input : N : 6 
 Elements : 85 66 3 80 93 88 
Output : 11 is absent
*/

#include<stdio.h> 
#include<stdlib.h>
#define TRUE 1 
#define FALSE 0 
typedef int BOOL; 

BOOL Check(int Arr[], int iLength) 
{ 
    BOOL check11Exists = FALSE;
    for (int i = 0; i < iLength; i++)
    {
        if(Arr[i] == 11)
        {
            check11Exists = TRUE;
            break;
        }
    }
    return check11Exists;
    
}

int main() 
{ 
    int iSize = 0,iRet = 0,iCnt = 0; 
    int *p = NULL; 
    BOOL bRet = FALSE;
    printf("Enter number of elements"); 
    scanf("%d",&iSize); 
    p = (int *)malloc(iSize * sizeof(int)); 
    if(p == NULL) 
    { 
    printf("Unable to allocate memory"); 
    return -1; 
    } 
    printf("Enter %d elements ", iSize); 
    for(iCnt = 0;iCnt<iSize; iCnt++) 
    { 
    printf("Enter element : %d",iCnt+1); 
    scanf("%d",&p[iCnt]); 
    } 
    bRet = Check(p, iSize); 

    if(bRet == TRUE) 
    { 
    printf("11 is present"); 
    } 
    else 
    { 
    printf("11 is absent"); 
    } 
    free(p); 
    return 0; 
}