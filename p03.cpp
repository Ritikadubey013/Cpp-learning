#include<iostream>
using namespace std;

class Distance{
    private:
    int meter;

    public:
    void setdata(int m){
        meter=m;

    }

    void add(Distance d){
        meter=meter+d.meter;
    }
    void display()
    {
        cout<<"distance "<<meter << "meter "<<endl;
    }
};

int main(){
    Distance d1,d2;
    d1.setdata(10);
    d2.setdata(20);
    d1.add(d2);
    d2.add(d1);
    d1.display();
    return 0;
    

}