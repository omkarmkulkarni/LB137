/*
Write application which accept file name from user and open that file in read mode. 
Input : Demo.txt 
Output : File opened successfully. 
*/

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<io.h>
#include<iostream>

using namespace std;

class FileX
{
    public:
    int fd;

    FileX(char Name[])
    {
        fd = open(Name, O_CREAT);
        if(fd == -1)
        {
            cout<<"Unable to create file\n";
        }
        else
        {
            cout<<"File successfully created..\n";
        }
    }
    ~FileX()
    {
        close(fd);
    }
};

int main()
{
    char str[30];
    cout<<"Enter file Name \n";
    cin>>str;
    FileX obj(str);
    return 0;
}