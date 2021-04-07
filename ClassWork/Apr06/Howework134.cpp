// 134. Accept string. Return number of words. 
// Input: _ _Abc_ _ _p15_ _ _&_ _ AB_ _   (_ is space)
// Output: __cbA _ _ _ 51p _ _ _&_ _B A _ _
// In Place word reverse without using any other memory
// reverse the word from string
#include<iostream>
using namespace std;
class StringX
{
public:
    char str[30];
    void Accept()
    {
        cout<<"Enter String:\n";
        scanf("%[^'\n']s",str);
    }
    void reverse(int iStart,int iEnd)
    {
        while(iStart<iEnd)
        {
            char temp=str[iStart];
            str[iStart]=str[iEnd];
            str[iEnd]=temp;
            iStart++;
            iEnd--;
        }
    }
    void reverseWord()
    {
        char *ptr=str;
        int iStart=0;
        int iEnd=0;
        int iCount=0;
        while(*ptr!='\0')
        {
            if(*ptr!=' ')
            {
                iStart=iCount;
                while(*ptr!='\0' && *ptr!=' ')
                {
                    ptr++;
                    iCount++;
                }
                iEnd=iCount-1;
                reverse(iStart,iEnd);
            }
            ptr++;
            iCount++;
        }
    }
    void Display()
    {
        cout<<str<<"\n";
    }
};
int main()
{
    int ret=0;
    StringX obj;
    obj.Accept();
    obj.reverseWord();;
    obj.Display();
    return 0;
}