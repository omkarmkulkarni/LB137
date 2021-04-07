//Accept filename from user and read first 10 characters and display on the console.

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
//#include<unistd.h>
#include<iostream>
#include<io.h>
using namespace std;
// O_RDONLY         Read
// O_WRONLY        Write
// O_RDWR           Read & Write
// O_CREAT           Create new file
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
        read(fd, Arr, 10);
        write(1,Arr,10);
    }
};
int main()
{
    char str[30];
    cout<<"Enter file name\n";
    cin>>str;
    FileX obj(str);
    obj.ReadData();
    return 0;
}