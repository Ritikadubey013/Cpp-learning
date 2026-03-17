#include<iostream>
using namespace std;

 int add(int a,int b){
    return a+b;
}

 int sub(int a,int b){
    return a-b;
}

 int mul(int a, int b)
{
    return a*b;
}

int divi(int a, int b)
{
    return a/b;
}

int main()
{
    int ch,a,b;

    cout << "Menu: 1. add 2. sub , 3. mult, 4. div, 5. exit\n";
    cout<<"choose op";
    
    cin>>ch;

    if (ch>=1 && ch<=4){
        cout<<"enter values";
        cin>>a>>b;
    }
    switch(ch){
        case 1:
        cout<<"result:"<<add(a,b);
        break;

        case 2:
        cout<<"result:"<<sub(a,b);
        break;

        case 3:
        cout<<"result:"<<mul(a,b);
        break;

        case 4:
        if(b!=0)
         cout<<"result:"<<divi(a,b);
        else
         cout<<"div not possible";
         break;

         case 5:
         
         cout<<"invalid";
         break;
    }
    return 0;

}