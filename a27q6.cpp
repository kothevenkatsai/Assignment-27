/*
6. Create a class CString to represent a string.
a) Overload the + operator to concatenate two strings.
b) == to compare 2 strings.
*/
#include<iostream>
using namespace std;
class CString
{
    private:
        string s1;
    public:
        CString(string s)
        {
            s1=s;
        }
        CString()
        {

        }
        CString operator+(CString &s)
        {
            CString temp;
            temp.s1=s1+s.s1;
            return temp;
        }
        void display()
        {
            cout<<"the string is "<<s1<<endl;
        }
};
int main()
{
    CString c1("balaji "),c2("kothe"),c3;
    c3=c1+c2;
    c3.display();
    return 0;
}
