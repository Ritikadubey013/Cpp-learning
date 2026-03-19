#include<iostream>
using namespace std;

class test {
    private:
     int a;
     int b;

     public:

     void setdata(int x, int y){
        a=x;
        b=y;
     }

     void display()
     {
        cout<<"a="<<a<<"& b="<<b<<endl;

     }
};

int main()
{
    test obj1,obj2;
    obj1.setdata(10,20);
    obj2.setdata(20,40);

    cout<<"object 1";
    obj1.display();

    cout<<"object 2";
    obj2.display();

    return 0;
}