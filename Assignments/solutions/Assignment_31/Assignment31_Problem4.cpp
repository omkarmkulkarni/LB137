/*
4. Write application which accept file name from user and display size of file. 
Input : Demo.txt 
Output : File size is 56 bytes
*/

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

    int ReadData()
    {
        char Arr[20];
        int ret = 0, contentSize = 0;
        while ((ret = read(fd, Arr, 10)) != 0)
        {
            contentSize = contentSize + ret;
        }
        return contentSize;
    }
};
int main()
{
    char str[30];
    int size = 0;
    cout<<"Enter file name\n";
    cin>>str;
    FileX obj(str);
    size = obj.ReadData();
    cout<<"File size is: " << size << " bytes\n";
    return 0;
}