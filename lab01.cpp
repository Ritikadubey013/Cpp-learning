#include <iostream>
#include <cstring>
using namespace std;

class A
{
    string str;

public:
    A(string s)
    {
        str = s;
    }

    bool isPalindrome()
    {
        string rev = "";
        int i;

        for(i = str.length() - 1; i >= 0; i--)
        {
            rev = rev + str[i];
        }

        if(str == rev)
            return true;
        else
            return false;
    }
};

class B
{
    char arr[100];

public:
    B(char s[])
    {
        strcpy(arr, s);
    }

    bool isPalindrome()
    {
        char rev[100];
        int i, n;

        n = strlen(arr);

        for(i = 0; i < n; i++)
        {
            rev[i] = arr[n - i - 1];
        }

        rev[n] = '\0';

        if(strcmp(arr, rev) == 0)
            return true;
        else
            return false;
    }
};

int main()
{
    string s1;
    char s2[100];

    cout << "Class A String: ";
    cin >> s1;

    cout << "Class B String: ";
    cin >> s2;

    A obj1(s1);
    B obj2(s2);

    if(obj1.isPalindrome())
        cout << "Class A: Palindrome" << endl;
    else
        cout << "Class A: Not Palindrome" << endl;

    if(obj2.isPalindrome())
        cout << "Class B: Palindrome" << endl;
    else
        cout << "Class B: Not Palindrome" << endl;

    return 0;
}