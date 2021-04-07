//Pattern
//5984
//4       8       9       5
//8       9       5        
//9       5
//5
#include<iostream>
using namespace std;

class NumberX
{
    public:
    int iNo;

    void Accept()
    {
        cout<<"Enter String\n";
        cin>>iNo;
    }

    void DisplayPattern()
    {
        int iValue = iNo, iCnt =0, i = 0, j =0;
        while(iValue > 0)
        {
            iCnt++;
            iValue = iValue /10;
        }
        iValue = iNo;
        for ( i = iCnt; i > 0; i--)
        {
            for ( j = 0; j < i; j++)
            {
                cout<<iValue%10<<"\t";
                iValue = iValue/10;
            }
            cout <<"\n";
            iValue = iNo;
        }
        cout <<"\n";
        iValue = iValue / 10;
        }
};
int main()
{
    int  iRet = 0;
    NumberX obj;
    obj.Accept();
    obj.DisplayPattern();
    return 0;
}