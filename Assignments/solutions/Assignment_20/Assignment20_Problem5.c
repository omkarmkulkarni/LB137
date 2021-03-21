/*
Accept N numbers from user and display summation of digits of each 
number. 
Input : N : 6 
 Elements : 8225 665 3 76 953 858 
Output : 17 17 3 13 17 21 
*/

#include<stdio.h> 
#include<stdlib.h>
#define TRUE 1 
#define FALSE 0 
typedef int BOOL;

void DigitsSum(int Arr[], int iLength) 
{ 
    int i = 0;
    if((Arr == NULL) || (iLength <= 0))
    {
        return;
    }
    for ( i = 0; i < iLength; i++)
    {
    int iDigit = 0;
    int iNo = Arr[i];
    int iSum = 0;
        if(iNo < 0)
        {
            iNo = -iNo;
        }
        while (iNo > 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }
    printf("%d\t", iSum);
    }
} 

int main() 
{ 
 int iSize = 0, iCnt = 0; 
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
 DigitsSum(p, iSize); 
 free(p); 
 return 0; 
}