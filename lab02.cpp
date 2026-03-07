#include <iostream>
#include <string>
using namespace std;

class StringManipulator
{
    string str;

public:
    StringManipulator(string s)
    {
        str = s;
    }

    void capitalize()
    {
        if(str.length() > 0)
        {
            str[0] = toupper(str[0]);
        }
    }

    void toSentenceCase()
    {
        int i;

        str[0] = toupper(str[0]);

        for(i = 1; i < str.length(); i++)
        {
            str[i] = tolower(str[i]);
        }
    }

    void toTitleCase()
    {
        int i;

        str[0] = toupper(str[0]);

        for(i = 1; i < str.length(); i++)
        {
            if(str[i-1] == ' ')
                str[i] = toupper(str[i]);
            else
                str[i] = tolower(str[i]);
        }
    }

    void getString()
    {
        cout << "Current String: " << str << endl;
    }

    void putString()
    {
        cout << "Updated String: " << str << endl;
    }
};

int main()
{
    string s;
    int choice;

    cout << "Enter string:" << endl;
    getline(cin, s);

    StringManipulator obj(s);

    cout << "\nMenu:" << endl;
    cout << "1. Capitalize" << endl;
    cout << "2. Sentence Case" << endl;
    cout << "3. Title Case" << endl;

    cout << "Choice: ";
    cin >> choice;

    if(choice == 1)
        obj.capitalize();
    else if(choice == 2)
        obj.toSentenceCase();
    else if(choice == 3)
        obj.toTitleCase();

    obj.putString();

    return 0;
}