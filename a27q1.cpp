/*1. Define a class Complex with appropriate instance variables and member functions.
Define following operators in the class:
a. +
b. -
c. *
d. ==
*/
#include<iostream>
using namespace std;
class Complex
{
    private:
        int r;
        int i;
    public:
        void setdata(int real,int img)
        {
            r=real;
            i=img;
        }
        Complex operator+(Complex &c)
        {
            Complex temp;
            temp.i=i+c.i;
            temp.r=r+c.r;
            return temp;
        }
        Complex operator-(Complex &c)
        {
            Complex temp;
            temp.i=i-c.i;
            temp.r=r-c.r;
            return temp;
        }
        Complex operator*(Complex &c)
        {
            Complex temp;
            temp.i=i*c.i;
            temp.r=r*c.r;
            return temp;
        }
        bool operator==(Complex &c)
        {
            if(i==c.i && r==c.r)
                return 1;
            else
                return 0;
        }
        void display()
        {
            cout<<r<<"+"<<i<<"i"<<endl;
        }
};
int main()
{
    Complex c1,c2,c3;
    c1.setdata(4,5);
    c2.setdata(2,3);
    c3=c1+c2;
    c3.display();
    c3=c1-c2;
    c3.display();
    c1.setdata(2,4);
    c2.setdata(3,4);
    c3=c1*c2;
    c3.display();
    if(c1==c2)
        cout<<"thankyou";
    else
        cout<<"byee";


}
