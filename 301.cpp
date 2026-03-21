#include<iostream>
using namespace std;

class book{
    private:
    string book_title;
    string author;
    string isbn;

    public:
    void getinputdata()
    {
        cout<<"title:";
        getline(cin,book_title);
        cout<<"enter author name";
        getline(cin,author);
        cout<<"ISBN";
        getline(cin,isbn);

    }
void displaybookinfo()
{
    cout<< "book title"<<book_title<<endl;
    cout<<"author"<<author<<endl;
    cout<<"isbn"<<isbn<<endl;

}
};

int main()
{
 book obj1;
 obj1.getinputdata();
 obj1.displaybookinfo();


    return 0;
}