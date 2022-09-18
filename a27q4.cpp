/* 4. Create a class Time which contains:
- Hours
- Minutes
- Seconds
Write a C++ program using operator overloading for the following:
1. = = : To check whether two Times are the same or not.
2. >> : To accept the time.
3. << : To display the time.
*/
#include<iostream>
using namespace std;
class Time
{
    private:
        int hrs;
        int mins;
        int sec;
    public:
        Time()
        {

        }
        Time(int h,int m,int s)
        {
            hrs=h;
            mins=m;
            sec=s;
        }
        bool operator==(Time &t)
        {
           if(hrs==t.hrs && mins==t.mins && sec==t.sec)
                return 1;
           else
                return 0;
        }
        friend void operator<<(ostream &os,Time &t);
        friend void operator>>(istream &in,Time &t);
};
void operator<<(ostream &os,Time &t)
{
    os<<t.hrs<<" hrs "<<t.mins<<" mins "<<t.sec<<" secs "<<endl;
}
void operator>>(istream &in,Time &t)
{
    cout<<"enter hrs: ";
    in>>t.hrs;
    cout<<"enter mins: ";
    in>>t.mins;
    cout<<"enter sec: ";
    in>>t.sec;
}
int main()
{
    Time t1,t2;
    cout<<"enter 1 time"<<endl;
    cin>>t1;
    cout<<"1 time: ";
    cout<<t1;
    cout<<"enter 2 time"<<endl;
    cin>>t2;
    cout<<"2 time: ";
    cout<<t2;
    if(t1==t2)
        cout<<"Time is same"<<endl;
    else
        cout<<"Time is not same"<<endl;
    return 0;
}
