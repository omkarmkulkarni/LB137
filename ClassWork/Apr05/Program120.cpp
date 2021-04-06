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
    int iRet = 0;
    Arithmetic obj;

    obj.Accept();
    iRet = obj.Addition();
    cout<<"Addition is : "<<iRet<<"\n";
    iRet = obj.Subtraction();
    cout<<"Subtraction is : "<<iRet<<"\n";
    return 0;
}
