/*
5. Consider following class Numbers
class Numbers
{
int x,y,z;
public:
// methods
};
Overload the operator unary minus (-) to negate the numbers.
*/
#include<iostream>
using namespace std;
class Numbers
{
    private:
        int x,y,z;
    public:
        Numbers(int xi,int yi,int zi)
        {
            x=xi;
            y=yi;
            z=zi;
        }
        Numbers()
        {

        }
        Numbers operator-()
        {
           Numbers temp;
           temp.x=-x;
           temp.y=-y;
           temp.z=-z;
           return temp;
        }
        void display()
        {
            cout<<"x="<<x<<"\ny="<<y<<"\nz="<<z<<endl;
        }
};
int main()
{
    Numbers n1(1,2,3),n2;
    n2=-n1;
    n2.display();
    return 0;
}
