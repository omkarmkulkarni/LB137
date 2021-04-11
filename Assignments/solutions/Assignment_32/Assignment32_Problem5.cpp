/*
Accept three file names from user which are existing files. Create one new file 
named as Demo.txt. Write name and Data of that three files in Demo.txt file one 
after another. 
Input : abc.txt 
 pqr.txt 
 xyz.txt 
Output : Write file name and data of each file in Demo.txt file. 
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
    int fd, fd1, fd2, fd3, fileLength1 = 0, fileLength2 = 0, fileLength3 =0, demoFileLength =0;
    char file1[100], file2[100], file3[100], demoFile[100];
    void AcceptFileNames()
    {
        cout<<"Enter First File Name:\n";
        scanf(" %[^'\n']s", file1);
        cout<<"Enter Second File Name:\n";
        scanf(" %[^'\n']s", file2);
        cout<<"Enter Third File Name:\n";
        scanf(" %[^'\n']s", file3);
        cout<<"Enter Output File Name:\n";
        scanf(" %[^'\n']s", demoFile);
    }

    void OpenFiles()
    {
        //cout<<file1;
        //cout<<file2;
        fd1 = open(file1, O_RDONLY);
        fd2 = open(file2, O_RDONLY);
        fd3 = open(file3, O_RDONLY);
        fd = open(demoFile, O_CREAT | O_WRONLY | O_APPEND);
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
        if(fd3 == -1)
        {   
            cout<<"Unable to open file 3\n";
            exit(0);
        }
        if(fd == -1)
        {   
            cout<<"Unable to create demo file\n";
            exit(0);
        }
    }

    int StrlenX(char strSearch[])
    {
        int iCnt = 0;
        char *ptr = strSearch;
        while (*ptr != '\0')
        {
            ptr++;
            iCnt++;
        }
        return iCnt;
    }

    void Write()
    {
        char Arr[1];
        int ret1 = 0, ret2 =0, ret3 = 0;
        write(fd, file1, StrlenX(file1));
        write(fd, "\n", 1);
        while ((ret1 = read(fd1, Arr, 1)) != 0)
        {
            write(fd, Arr, 1);
        }
        write(fd, "\n", 1);
        write(fd, file2, StrlenX(file2));
        write(fd, "\n", 1);
        while ((ret2 = read(fd2, Arr, 1)) != 0)
        {
            write(fd, Arr, 1);
        }
        write(fd, "\n", 1);
        write(fd, file3, StrlenX(file3));
        write(fd, "\n", 1);
        while ((ret3 = read(fd3, Arr, 1)) != 0)
        {
            write(fd, Arr, 1);
        }
    }
    
     ~FileX()
    {
        close(fd);
        close(fd1);
        close(fd2);
        close(fd3);
    }
};
int main()
{
    FileX obj;
    obj.AcceptFileNames();
    obj.OpenFiles();
    obj.Write();
    return 0;
}