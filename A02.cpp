 #include<iostream>
 using namespace std;

 int main()
 {
    int quater, dimes, nickels;
    float total_cents, dollars;

    cout<<"enter the no. off quarters:";
    cin>>quater;
    cout<<"enter the number of dimes";
    cin>>dimes;
    cout<<"enter the number of nickels";
    cin>>nickels;

    total_cents = (quater*25)+(dimes*10)+(nickels*5);
     
    dollars=total_cents/100;

    cout<<"your charge total to $"<<dollars;

    return 0;
 }