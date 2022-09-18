/*
7. Define a C++ class fraction
class fraction
{
long numerator;
long denominator;
Public:
fraction (long n=0, long d=0);
}
Overload the following operators as member or friend:
a) Unary ++ (pre and post both)
b) Overload as friend functions: operators << and >>.
*/
#include<iostream>
using namespace std;
class fraction
{
    private:
        long numerator;
        long denominator;
    public:
        fraction operator++(int) //post
        {

            cout<<"post: ";
            fraction temp;
            temp.numerator=numerator++;
            temp.denominator=denominator++;
            return temp;
        }
        fraction operator++() //pre
        {
            cout<<"pre: ";
            fraction temp;
            temp.numerator=++numerator;
            temp.denominator=++denominator;
            return temp;
        }
        fraction()
        {

        }
        friend void operator<<(ostream &os,fraction &f);
        friend void operator>>(istream &in,fraction &f);
};
void operator<<(ostream &os,fraction &f)
{
    os<<f.numerator<<"/"<<f.denominator<<endl;
}
void operator>>(istream &in,fraction &f)
{
    cout<<"enter numerator :";
    in>>f.numerator;
    cout<<"enter denominator :";
    in>>f.denominator;
}
int main()
{
    fraction f1,f2,f3;
    cin>>f1;
    cin>>f2;
    cout<<"f1 :";
    cout<<f1;
    f3=f1++;
    cout<<f3;
    cout<<"f1 :";
    cout<<f1;
    f3=++f1;
    cout<<f3;

    cout<<"f2 :";
    cout<<f2;
    f3=f2++;
    cout<<f3;
    cout<<"f2 :";
    cout<<f2;
    f3=++f2;
    cout<<f3;
    return 0;
}
