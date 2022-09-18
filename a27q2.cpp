//2. Write a C++ program to overload unary operators that is increment and decrement.
#include<iostream>
using namespace std;
class Complex
{
    private:
        int n1;
        int n2;
    public:
        Complex(int a,int b)
        {
            n1=a;
            n2=b;
        }
        Complex()
        {

        }
        Complex operator++(int) //post
        {
            Complex temp;
            temp.n1=n1++;
            temp.n2=n2++;
            return temp;
        }
        Complex operator++() //pre
        {
            Complex temp;
            temp.n1=++n1;
            temp.n2=++n2;
            return temp;
        }
        void display()
        {
            cout<<"n1="<<n1<<" n2="<<n2<<endl;
        }
};
int main()
{
    Complex c1(2,3),c2;
    c2=c1++;
    c2.display();
    c2=c1++;
    c2.display();
    return 0;
}
