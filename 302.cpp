#include<iostream>
using namespace std;

class carpark{
    private:
    string carno;
    float hr;
    int charge;

    public:

    void getinputcar()
    {
        cout<<"car reg no.";
        getline(cin,carno);
        cout<<"parking no.";
        cin>>hr;
        cout<<"charge";
        cin>>charge;

    }

    void displayinfo()
    {
        cout<<"car reg no."<<carno<<endl;
        cout<<"parking no."<<hr<<endl;
        cout<<"charge"<<charge<<endl;
    }
};

int main()
{
    carpark c1;
    c1.getinputcar();
    c1.displayinfo();

    return 0;
}