#include<iostream>
using namespace std;

class StringX
{
    public:
    char str[30];

    void Accept()
    {
        cout<<"Enter String\n";
        scanf("%[^'\n']s", str);
    }

    int StrlenX()
    {
        int iCnt = 0;
        char *ptr = str;
        while (*ptr != '\0')
        {
            ptr++;
            iCnt++;
        }
        return iCnt;
    }

    void DisplayPattern()
    {
        char *ptr =str;
        char *s = str;
        int iCnt =0;
        while (*ptr != '\0')
        {
            while(*(s + iCnt) != '\0')
            {
                cout<<*s<<"\t";
                s++;
            }
            s = str;
            ptr++;
            iCnt++;
            cout<<"\n";
        }
    }
};
int main()
{
    int  iRet = 0;
    
    StringX obj;
    obj.Accept();
    iRet = obj.StrlenX();
    obj.DisplayPattern();
    cout<<"String Length is : "<<iRet<<"\n";
    return 0;
}