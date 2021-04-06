// With OOP concept
#include<iostream>

using namespace std;

class Arithmetic
{
    public:                                     //Access specifier
    int iNo1, iNo2;                             //Characteristics

    void Accept()                               // Behaviour
    {
        cout<<"Enter first number\n";
        cin>>iNo1;
        cout<<"Enter second number\n";
        cin>>iNo2;
    }

    int Addition()                               // Behaviour
    {
        int iResult = 0;
        iResult = iNo1 + iNo2;
        return iResult;
    }

    int Subtraction()                            // Behaviour
    {
        int iResult = 0;
        iResult = iNo1 - iNo2;
        return iResult;
    }

};

int main()
{
    int iRet1 = 0, iRet2 = 0;
    Arithmetic obj1;
    Arithmetic obj2;

    obj1.Accept();
    iRet1 = obj1.Addition();
    cout<<"Addition is : "<<iRet1<<"\n";

    obj2.Accept();
    iRet2 = obj2.Subtraction();
    cout<<"Subtraction is : "<<iRet2<<"\n";
    return 0;
}
