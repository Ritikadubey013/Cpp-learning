#include<iostream>
using namespace std;

void volcube(){
    int s,vol1;
    cout<< "enter side value:";
    cin>>s;
    vol1=s*s*s;
    cout<<"volume of cube:"<<vol1<<endl;

}
void volrect(){
    int l,b,h,vol2;
    cout<< "enter l,b,h value:";
    cin>>l>>b>>h;
    vol2=l*b*h;
    cout<<"volume of cube:"<<vol2<<endl;
    
}
void volcylin(){
    int r,h,vol3;
    cout<< "enter r and h value:";
    cin>>r>>h;
    vol3=3.14*r*r*h;
    cout<<"volume of cube:"<<vol3<<endl;
    
}
int main(){
     volcube();
     volrect();
     volcylin();

    return 0;
}