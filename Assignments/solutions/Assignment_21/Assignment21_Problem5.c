// 5. Accept division of student from user and depends on the division
// display exam timing. There are 4 divisions in school as A,B,C,D. Exam
// of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM.
// (Application should be case insensitive)
// Input    : C
// Output   : Your exam at 9.20 AM
// Input    : d
// Output   : Your exam at 10.30 AM
// Program Layout :

#include<stdio.h>

void DisplaySchedule(char chDiv)
{
    if(chDiv == '\0')
    {
        return;
    }

    if((chDiv == 'a') || (chDiv == 'A')) 
    {
        printf("Exam is at 7 AM.");
    }
    else if((chDiv == 'b') || (chDiv == 'B'))
    {
        printf("Exam is at 8:30 AM.");
    }
    else if((chDiv == 'c') || (chDiv == 'C'))
    {
        printf("Exam is at 9:20 AM.");
    }
    else if((chDiv == 'd') || (chDiv == 'D'))
    {
        printf("Exam is at 10:30 AM.");
    }
    else 
    {
        printf("Invalid Division");
    }
}

int main()
{
    char cValue = '\0';
    
    printf("Enter your Division: ");
    scanf("%c",&cValue);
    
    DisplaySchedule(cValue);

    return 0;
}