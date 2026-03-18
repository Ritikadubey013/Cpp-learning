//129013044
#include <iostream>
using namespace std;

// Generic swap function (call by reference)
template <class T>
void swapValues(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 10, y = 20;
    float a = 5.5, b = 9.2;
    char c = 'A',  d = 'Z';

    cout << "Before Swap (int): " << x << " " << y << endl;
    swapValues(x, y);
    cout << "After Swap (int): " << x << " " << y << endl;

    cout << "\nBefore Swap (float): " << a << " " << b << endl;
    swapValues(a,b);
    cout << "After Swap (float): " << a << " " << b << endl;

    cout << "\nBefore Swap (char): " << c << " " << d << endl;
    swapValues(c,d);
    cout << "After Swap (char): " << c << " " << d << endl;

    return 0;
}