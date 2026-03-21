#include<iostream>
using namespace std;

class point
{
    private :
    float x,y;

    public:

    point(){
        x=0;
        y=0;

    }

    point(float x1,float y1)
    {
        x1=x;
        y1=y;
    }
    void accept()
    {
        cout<<"x coordinate ";
        cin>>x;
        cout<<"y-coordinate ";
        cin>>y;
    }
    float distance(point p)
    {
        return((x-p.x)*(x-p.x)+(y-p.y)*(y-p.y));
    }

};

int main()
{
    point p1;
    point p2;

    cout<<"enter coordinates p1";
    p1.accept();

    cout<<"enter coordinate p2";
    p2.accpet();

    float dist=p1.distance(p2);

    cout<<"distance bw 2 point"<<dist<<endl;
    return 0;
}