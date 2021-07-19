#include<iostream>
using namespace std;
class shape
{
        double b;
        double h;
    public:
        shape(double b1,double h1)
        {
            b=b1;
            h=h1;
        }
        public:double getB()
        {
            return b;
        }
        public:double getH()
        {
            return h;
        }
        virtual double disp_area()=0;
};

class triangle :public shape
{
    public:
        triangle(double b1, double h1):shape(b1,h1)
        {
        }
        double disp_area();
        bool isRightAngled();
};

class rectangle:public shape
{
    public:
        rectangle(double b1,double h1):shape(b1,h1)
        {
        }
        double disp_area();
};



double triangle::disp_area()
{   
    return (getB()*getH())*1/2;
}

double rectangle::disp_area()
{
    return getB()*getH();
}
 
bool triangle::isRightAngled()
{
    cout<<"Right angle"<<endl;
    return 1;
}

void tcompute(shape *sh)
{
    cout << "Area is:" <<sh->disp_area() <<endl;
    cout<<dynamic_cast<triangle*>(sh)->isRightAngled()<<endl;
}

int main()
{
    triangle t(10,8);
    tcompute(&t);
    return 0;
}
