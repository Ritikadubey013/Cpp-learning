#include <iostream>
using namespace std;
 
int main()
{
    float rad;
    const float pi=3.14159;

    cout<<"enter the radius ";
    cin>> rad;

    float area =pi *rad*rad;
    cout<< "area is "<< area << endl;
    return 0;

}