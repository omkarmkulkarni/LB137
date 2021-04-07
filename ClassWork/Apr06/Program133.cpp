// 133. Accept string. Return number of words. 
// Input: _ _Abc_ _ _pqr_ _ _A_ _ AB_ _   (_ is space)
// Output: 4
#include<iostream>
using namespace std;
class StringX
{
   public:
   char str[30];
   int iSize;
   void Accept()
   {
      cout<<"Enter String.\n";
      scanf("%[^'\n]s",str);
   }
   int WordCount()
   {
       int iCnt = 0;
       char *ptr = str;
       while(*ptr != '\0')
       {
           if(*ptr == ' ')
           {
               while((*ptr == ' ') && (*ptr != '\0'))
               {
                   ptr++;
               }
           }
           else 
           {
               iCnt++;
               while((*ptr != ' ') && (*ptr != '\0'))
               {
                   ptr++;
               }
           }
       }
        return iCnt;
   }
};
int main()
{
   int ret = 0;
   StringX obj;
   obj.Accept();
   ret = obj.WordCount();
   cout<<"Word count is: "<<ret<<"\n";
   return 0;
}