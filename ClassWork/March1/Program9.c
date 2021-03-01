// Accept the marks from user and display the result like:
// 0 - 35 Fail
//35 - 50 Pass Class
//51 - 60 Second Class
//61- 70 First Class
//71 - 100 Distinction
#include<stdio.h>
void CheckResult(int iMarks)
{

    if (iMarks < 0 || iMarks >100) // Input filter
    {
        printf("Invalid Marks");
    }
    else if(iMarks >= 0 && iMarks < 35)
    {
        printf("Fail");
    }
    else if(iMarks >=35 && iMarks < 50)
    {
        printf("Pass Class");
    }
    else if(iMarks >= 50 && iMarks < 60)
    {
        printf("Second Class");
    }
    else if(iMarks >= 60 && iMarks < 70)
    {
        printf("First Class");
    }
    else if(iMarks >= 70 && iMarks <= 100)
    {
        printf("Distinction");
    }

}

int main()
{
    int iValue = 0;

    printf("Enter your marks\n");
    scanf("%d" , &iValue);

    CheckResult(iValue);
    return 0;
}