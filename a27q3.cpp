//3. Write a C++ program to add two complex numbers using operator overloaded by a friend function.
#include<iostream>
using namespace std;
class Complex
{
    private:
        int real;
        int img;
    public:
        Complex()
        {

        }
        Complex(int r,int i)
        {
            real=r;
            img=i;
        }
        void display()
        {
            cout<<real<<"+"<<img<<"i"<<endl;
        }
        friend Complex operator+(Complex,Complex);
};
Complex operator+(Complex x,Complex y)
        {
           Complex temp;
           temp.real=x.real+y.real;
           temp.img=x.img+y.img;
           return temp;
        }
int main()
{
    Complex c1(2,3),c2(4,5),c3;
    c3=c1+c2;
    c3.display();
    return 0;
}
