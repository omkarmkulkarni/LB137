/*
2. Write application which accept file name and one character from user. Count the 
frequency of that character in file. 
Input : Demo.txt 
 M 
Output : Count occurrence of M in Demo.txt
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
    int fd, occurences=0; 
    char searchChar;
    FileX(char Name[])
    {
        fd = open(Name, O_RDONLY);
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

    void AcceptSearchChar()
    {
        cout<<"Enter char to search\n";
        cin>>searchChar;
    }

    void FindOccurrences()
    {
        int ret = 0;
        char Arr[1];
        while ((ret=read(fd, Arr, 1))!=0)
        {
            if(Arr[0] == searchChar)
            {
                occurences++;
            }
        }
        cout<<"Count of occurence of "<<searchChar<<" in file = "<<occurences;
    } 
    ~FileX()
    {
        close(fd);
    }

};
int main()
{
    char str[30];
    char searchChar;
    int iRet = 0;
    cout<<"Enter file name\n";
    cin>>str;
    FileX obj(str);
    obj.AcceptSearchChar();
    obj.FindOccurrences();
    return 0;
}