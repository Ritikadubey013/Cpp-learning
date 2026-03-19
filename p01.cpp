#include<iostream>
using namespace std;

class student{
    private:
     int rollno;
     string name;
     float marks;

    public:
void getdata(){
    cout<<"enter roll no.,name, marks:";
    cin>>rollno>>name>>marks;

}

void display(){
    cout<<"roll no:"<<rollno<<endl;
    cout<<"name"<<name<<endl;
    cout<<"marks"<<marks<<endl;

}
};

int main()
{
    student s1;
    s1.getdata();
    s1.display();

    return 0;
    
}