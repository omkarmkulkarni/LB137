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
        int iDigit =0, iCnt =0, iValue = iNo ;

        while(iValue > 0)
        {
            iDigit = iValue ;
            
            while (iDigit > 0 )
            {
                cout << iDigit % 10 <<"\t";
                iDigit = iDigit/10;
            }
        cout <<"\n";
        iValue = iValue / 10;
        }
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