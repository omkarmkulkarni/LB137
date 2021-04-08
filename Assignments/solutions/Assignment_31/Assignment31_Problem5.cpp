/*
Write application which accept file name from user and one string from user. Write 
that string at the end of file. 
Input : Demo.txt 
 Hello World 
Output : Write Hello World at the end of Demo.txt file
*/

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<iostream>
#include<io.h>
using namespace std;

class FileX
{
public:
    int fd; 
    char strToAppend[30];
    FileX(char Name[])
    {
        fd = open(Name,O_WRONLY | O_APPEND);
        if(fd == -1)
        {   
            cout<<"Unable to open file\n";
            exit(0);
        }
        else
        {
            cout<<"File succesfully opened..\n";
        }
    }

    void AcceptStringToAppend()
    {
        cout<<"Enter string to append\n";
        scanf(" %[^'\n']s", strToAppend);
    }

    int StrlenX()
    {
        int iCnt = 0;
        char *ptr = strToAppend;
        while (*ptr != '\0')
        {
            ptr++;
            iCnt++;
        }
        return iCnt;
    }

    void WriteData()
    {
        cout<<StrlenX();
        write(fd, strToAppend, StrlenX());
    }

    ~FileX()
    {
        close(fd);
    }

};
int main()
{
    char str[30];
    int size = 0;
    cout<<"Enter file name\n";
    cin>>str;
    FileX obj(str);
    obj.AcceptStringToAppend();
    obj.WriteData();
    return 0;
}