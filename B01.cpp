#include<iostream>
using namespace std;

void getinput(int &n1,int &n2)
{
    cout<<"enter n1:";
    cin>>n1;
    cout<<"enter n2:";
    cin>>n2;

}

void swap(int &n1,int &n2)
{
    int temp=n1;
    n1=n2;
    n2=temp;

}
int main()
{
    int n1,n2;
    getinput(n1,n2);
    cout<<"before swapping the number n1="<<n1<<",n2="<<n2<<endl;
    swap(n1,n2);
    cout<<"after swapping the number n1="<<n1<< ",n2="<<n2;

    return 0;
}