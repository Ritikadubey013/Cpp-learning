#include<iostream>
#include<string>
using namespace std;

int main(){
    string msg,key;

    cout<<"enter message:";
    getline(cin,msg);
    cout<<"enter keyword:";
    cin>>key;

    int a=0,e=0,i=0,o=0,u=0;

    for(int k=0;k<msg.length();k++){
        char ch= tolower(msg[k]);

        if(ch=='a')a++;
        else if(ch=='e')e++;
        else if(ch=='i')i++;
        else if(ch=='o')o++;
        else if(ch=='u')u++;

    }

    int totalvowel=a+e+i+o+u;
    
    int maxvowel='a';
    int maxcount=a;

    if(e>maxcount){
        maxcount=e;
        maxvowel='e';
    }
    if(i>maxcount){
        maxcount=i;
        maxvowel='i';
    }
    if(o>maxcount){
        maxcount=o;
        maxvowel='o';
    }
    if(u>maxcount){
        maxcount=u;
        maxvowel='u';
    }
   
    int word=1;
    for(int k=0;k<msg.length();k++) {
        if(msg[k]=' ')
        word++;
    }
int pos = msg.find(key);
    cout<<"total vowels:"<<totalvowel<<endl;
    cout<<"a:"<<a<<"e"<<e<<"i"<<i<<"o"<<o<<"u"<<u<<endl;
    cout<<"high wowel:"<<maxvowel<<endl;
    cout<<"no. of word"<<word<<endl;

if (pos != -1)
  cout<<"key pound at position"<<pos<<endl;

else
cout<<"key not found "<<endl;

return 0;

}