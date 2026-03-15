#include<iostream>
using namespace std;

int main()
{
    int r,c;
    cout<<"enter rows and columns";
    cin>>r>>c;

    int matrix[r][c];

    cout<<"enter matrix elements:";
    for(int i=0;i<r;i++)
    {
      for (int j=0 ; j<c; j++){

        cin>>matrix[i][j];
      }
    }

    for(int i=0;i<r;i++)
    {
        int sum=0;
        for(int j=0;j<c;j++){
        sum+=matrix[i][j];

    }
 cout<<"row "<<i+1<< "sum ="<< sum << endl;
    }
 for(int j =0;j<c;j++){
     int sum=0;
     for(int i=0;i<r;i++)
     {
        sum+=matrix[i][j];

     }
     cout<<"col"<<j+1<<"sum ="<< sum << endl;
}
return 0;
}