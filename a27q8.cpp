/*
8. Consider a class Matrix
Class Matrix
{
int a[3][3];
Public:
//methods;
};
Overload the - (Unary) should negate the numbers stored in the object.
*/
#include<iostream>
using namespace std;
class Matrix
{
    private:
       int a[3][3];
    public:
        void setdata(int k[3][3])
        {
            for(int i=0;i<3;++i)
            {
                for(int j=0;j<3;++j)
                {
                    a[i][j]=k[i][j];
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
                }
                cout<<endl;
            }
        }
        Matrix operator-()
        {
            Matrix temp;
            for(int i=0;i<3;++i)
            {
                for(int j=0;j<3;++j)
                {
                    temp.a[i][j]=-a[i][j];
                }
            }
            return temp;
        }
};
int main()
{
    int ma[3][3];
    for(int i=0;i<3;++i)
    {
        for(int j=0;j<3;++j)
        {
            cin>>ma[i][j];
        }
    }
    Matrix m1,m2;
    m1.setdata(ma);
    m1.display();
    m2=-m1;
    m2.display();
    return 0;
}
