#include<iostream>
using namespace std;

int main()
{
    int n,odd=0,even=0;
    cout<<"enter number of elements:";
    cin>>n;

    for(int i=1;i<=n;i++)
     {
        cout<<"enter elements"<<i<<endl;
     
        if(i%2==0)
        {
            even++;
        }

        else{
            odd++;
        }
    }

    cout<<"even no. count"<<even<<endl;
    cout<<"odd no. count"<<odd<<endl;
return 0;

}