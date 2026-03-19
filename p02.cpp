#include<iostream>
using namespace std;

class complex{
    private:
    float real,imag;

    public:
    void setdata(float r,float i)
    {
        real=r;
        imag=i;
    }
    void display()
    {
        cout<<real<<" + "<<imag<<"i"<<endl;

    }

    complex add(complex c)
    {
        complex temp;
        temp.real=real+c.real;
        temp.imag=imag+c.real;
        return temp;
    }
};

int main()
{
    complex c1,c2,c3;
    c1.setdata(2.5,3.2);
    c2.setdata(3.4,5.5);

    c3=c1.add(c2);

    cout<<"result of add:";
    c3.display();
    return 0;

}