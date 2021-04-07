//Accept filename from user and read no of bytes input by user and display on the console.

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

    void ReadData(int size)
    {
        char Arr[20];
        read(fd, Arr, size);
        printf("%s", Arr);
    }
};
int main()
{
    char str[30];
    int size = 0;
    cout<<"Enter file name\n";
    cin>>str;
    FileX obj(str);
    cout<<"Enter the no of bytes you want to read\n";
    cin>>size;
    obj.ReadData(size);
    return 0;
}