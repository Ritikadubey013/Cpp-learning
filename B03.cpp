#include<iostream>
using namespace std;



int main()
{
    int choice,n,arr[50];

    cout<<"menu: 1.Integer 2. Float, 3.Character 4.Exit\n";
    cout<<"choose type:";
    cin>>choice;

    if(choice==1)
    cout<<"enter no. of elements:";
    cin>>n;

    cout<<"enter element:";
    for(int i=0;i<n;i++)
    cin>>arr[i];

    
    
    
    
    return 0; 
}