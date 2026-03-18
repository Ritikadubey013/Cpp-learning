//129013044 ritika dubey
#include <iostream>
using namespace std;


template <class T>
void bubbleSort(T arr[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


template <class T>
void display(T arr[], int n)
{
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int a[] = {5, 1,4,2,3};
    float b[] = {3.4, 1.2, 5.6, 2.1};

    int n1 = 5, n2 = 4;

    bubbleSort(a, n1);
    bubbleSort(b, n2);

    cout << "Sorted integer array: ";
    display(a, n1);

    cout << "Sorted float array: ";
    display(b, n2);

    return 0;
}