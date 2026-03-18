//129013044ritikadubey 
#include <iostream>
using namespace std;


template <class T>
T findMax(T a, T b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    int x = 10, y = 25;
    float p = 4.5, q = 2.3;

    cout << "Max integer = " << findMax(x, y) << endl;
    cout << "Max float = " << findMax(p, q) << endl;

    return 0;
}