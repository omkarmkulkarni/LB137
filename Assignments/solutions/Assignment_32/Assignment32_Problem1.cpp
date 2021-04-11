/*
1. Write application which accept two file names from user. Compare the contents of 
that two files. If contents are same then return true otherwise return false. 
Input : Demo.txt Hello.txt 
Output : Compare contents of Demo.txt and Hello.txt 

Accept File 1
Accept File 2
Open File 1 with fd1
Open File 2 with fd2
Get Content Length for File1 by passing fd1 as fileLength1
Get Content Length for File2 by passing fd2 as fileLength2
Read File 1 and store contents to str1 by passing fd1 and fileLength1
Read File 2 and store contents to str2 by passing fd1 and fileLength1
if(str1 == str2) return true else return false.

*/

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<fcntl.h>
#include<iostream>
#include<io.h>
using namespace std;

class FileX
{
public:
    int fd1, fd2, fileLength1 = 0, fileLength2 = 0, checkDifference = 0;
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
        //cout<<file1;
        //cout<<file2;
        fd1 = open(file1, O_RDONLY);
        fd2 = open(file2, O_RDONLY);
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
    }

    void GetContentLengthOfFiles()
    {
        char Arr[20];
        int ret1 = 0, ret2 = 0;
        while ((ret1 = read(fd1, Arr, 10)) != 0)
        {
            fileLength1 = fileLength1 + ret1;
        }
        while ((ret2 = read(fd2, Arr, 10)) != 0)
        {
            fileLength2 = fileLength2 + ret2;
        }
        close(fd1);
        close(fd2);
    }

    bool CompareFiles()
    {
        char Arr1[1], Arr2[1];
        int ret1 = 0, ret2 = 0;
        if(fileLength1 != fileLength2)
        {
            checkDifference = 1;
        }
        OpenFiles();
        while (((ret1 = read(fd1, Arr1, 1)) != 0) && (ret2 = read(fd2, Arr2, 1)) != 0)
        {
            if(Arr1[0] != Arr2[0])
            {
                checkDifference = 1;
            }
        }
        if(checkDifference == 1)
        {
            return false;
        }
        else
        {
            return true;
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
    bool result = false;
    FileX obj;
    obj.AcceptFileNames();
    obj.OpenFiles();
    obj.GetContentLengthOfFiles();
    result = obj.CompareFiles();
    if(result == true)
    {
        cout<<"Both files are same";
    }
    else
    {
        cout<<"Both files are not same";
    }
    return 0;
}