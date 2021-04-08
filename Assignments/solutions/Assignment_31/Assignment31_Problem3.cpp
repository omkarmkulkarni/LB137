/*
Write application which accept file name from user and read all data from that file 
and display contents on screen. 
Input : Demo.txt 
Output : Display all data of file. 
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
    
    FileX(char Name[])
    {
        fd = open(Name,O_RDONLY);
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
    ~FileX()
    {
        close(fd);
    }

    void ReadData()
    {
        char Arr[20];
        int ret = 0;
        while ((ret = read(fd, Arr, 10)) != 0)
        {
            write(1, Arr, ret);
        }
    }
};
int main()
{
    char str[30];
    cout<<"Enter file name\n";
    cin>>str;
    FileX obj(str);
    cout<<"All Contents of File" << str << ":\n";
    obj.ReadData();
    return 0;
}