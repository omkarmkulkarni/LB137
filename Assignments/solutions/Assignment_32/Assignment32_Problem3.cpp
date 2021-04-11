/*
Write application which accept two file names from user. Append the contents of 
first file at the end of second file. 
Input : Demo.txt Hello.txt 
Output : Concat contents of Demo.txt at the end of Hello.txt
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
    int fd1, fd2, fileLength1 = 0;
    char file1[100], file2[100];

    void AcceptFileNames()
    {
        cout<<"Enter First File Name:\n";
        scanf(" %[^'\n']s", file1);
        cout<<"Enter Second File Name:\n";
        scanf(" %[^'\n']s", file2);
    }

    void OpenFiles()
    {
        fd1 = open(file1, O_RDONLY);
        fd2 = open(file2, O_WRONLY | O_APPEND);
        if(fd1 == -1)
        {   
            cout<<"Unable to open file 1\n";
            exit(0);
        }
        if(fd2 == -1)
        {   
            cout<<"Unable to open file 2\n";
            exit(0);
        }
        else
        {
            cout<<"Files succesfully opened..\n";
        }
    }

    void ReadFile1AndAppendFile2()
    {
        char Arr[1];
        int ret1 = 0;
        while ((ret1 = read(fd1, Arr, 1)) != 0)
        {
            write(fd2, Arr, 1);
        }
    }

    ~FileX()
    {
        close(fd1);
        close(fd2);
    }

};
int main()
{
    FileX obj;
    obj.AcceptFileNames();
    obj.OpenFiles();
    obj.ReadFile1AndAppendFile2();
    return 0;
}