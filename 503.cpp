#include<iostream>
#include<string>

using namespace std;
 class password{
    private:
    string pwd;

    public:
    void getpassword()
    {
        cout<<"enter password:";
        getline(cin,pwd);
    }

    int checkstrength()
    {
        int upper=0,lower=0,digit=0,special=0;

 if (pwd.length()<8)
   return 0;
   for(int i=0;i<pwd.length();i++){
    if(isupper(pwd[i]))
     upper=1;

    else if(islower(pwd[i]))
     lower=1;

    else if(isdigit(pwd[i]))
     digit=1;

    else 
    special=1;

   }
if (upper&&lower&&digit&&special)
return 1;
else
return 0;

    }

    
 };

 int main(){
    password p1;
    p1.getpassword();
    if(p1.checkstrength())
     cout<<"yes";

    else
    cout<<"no";

    return 0;
 }