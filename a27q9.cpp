/*
9. Consider the following class mystring
Class mystring
{
char str [100];
Public:
// methods
};
Overload operator “!” to reverse the case of each alphabet in the string
(Uppercase to Lowercase and vice versa).
*/
#include<iostream>
#include<cstring>
using namespace std;
class mystring
{
    private:
        char str[100];
    public:
        mystring(char bala[])
        {
            strcpy(str,bala);
        }
        mystring operator!()
        {
            mystring temp;
            strcpy(temp.str,strrev(str));
            return temp;
        }
        mystring()
        {

        }
        void display()
        {
            cout<<"string is: "<<str<<endl;
        }
};
int main()
{
    mystring m1="balaji",m2;
    m2=!m1;
    m2.display();
    return 0;
}


