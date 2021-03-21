/*
 Accept N numbers from user and return the largest number. 
Input : N : 6 
 Elements : 85 66 3 66 93 88 
Output : 93 
*/

#include<stdio.h> 
#include<stdlib.h>
#define TRUE 1 
#define FALSE 0 
typedef int BOOL; 
int Maximum(int Arr[], int iLength) 
{ 
    int i = 0;
    if((Arr == NULL) || (iLength <= 0))
    {
        return -1;
    }
    int iMax = Arr[0] ;
    for ( i = 0; i < iLength; i++)
    {
        if(Arr[i] > iMax)
        {
            iMax = Arr[i];
        }
    }
    return iMax;
} 
int main() 
{ 
 int iSize = 0, iCnt = 0, iRet = 0; 
 int *p = NULL; 
 printf("Enter number of elements"); 
 scanf("%d",&iSize); 
 p = (int *)malloc(iSize * sizeof(int)); 
 if(p == NULL) 
 { 
 printf("Unable to allocate memory"); 
 return -1; 
 } 
 printf("Enter %d elements ",iSize); 
 for(iCnt = 0;iCnt<iSize; iCnt++) 
 { 
    scanf("%d",&p[iCnt]); 
 }
 iRet = Maximum(p, iSize); 
 
 printf("Largest Number is %d",iRet); 
 
 free(p); 
 return 0; 
}