/*
10.Class Matrix
{
int a[3][3];
Public:
//methods;
};
Let m1 and m2 are two matrices. Find out m3=m1+m2 (use operator
overloading).
*/
#include<iostream>
using namespace std;
class Matrix
{
    private:
        int a[3][3];
    public:
        void setdata()
        {
            for(int i=0;i<3;++i)
            {
                for(int j=0;j<3;++j)
                {
                    cin>>a[i][j];
                }
            }
        }
        void display()
        {
            for(int i=0;i<3;++i)
            {
                for(int j=0;j<3;++j)
                {
                    cout<<a[i][j]<<" ";
                }cout<<endl;
            }
        }
        Matrix operator+(Matrix &m)
        {
            Matrix temp;
            for(int i=0;i<3;++i)
            {
                for(int j=0;j<3;++j)
                {
                    temp.a[i][j]=a[i][j]+m.a[i][j];
                }
            }
            return temp;
        }
};
int main()
{
    Matrix m1,m2,m3;
    cout<<"enter 1 matrix :";
    m1.setdata();
    cout<<"enter 2 matrix :";
    m2.setdata();
    cout<<"1 matrix :"<<endl;
    m1.display();
    cout<<"2 matrix :"<<endl;
    m2.display();
    m3=m1+m2;
    cout<<"final matrix : "<<endl;
    m3.display();
    return 0;
}
