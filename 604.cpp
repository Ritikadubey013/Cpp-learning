//129013044ritika dubey 
#include <iostream>
using namespace std;

template <class T>
class Array
{
    T arr[50];
    int size;
    int capacity;

public:
    Array()
    {
        size = 0;
        capacity = 50;
    }

    void insertAtBeginning(T val)
    {
        if(size == capacity)
        {
            cout << "Array Overflow\n";
            return;
        }
        for(int i = size; i > 0; i--)
            arr[i] = arr[i - 1];

        arr[0] = val;
        size++;
    }

    void insertAtEnd(T val)
    {
        if(size == capacity)
        {
            cout << "Array Overflow\n";
            return;
        }
        arr[size++] = val;
    }

    void deleteFromBeginning()
    {
        if(size == 0)
        {
            cout << "Array Underflow\n";
            return;
        }
        for(int i = 0; i < size - 1; i++)
            arr[i] = arr[i + 1];
        size--;
    }

    void deleteFromEnd()
    {
        if(size == 0)
        {
            cout << "Array Underflow\n";
            return;
        }
        size--;
    }

    void emptyArray()
    {
        size = 0;
        cout << "Array Emptied\n";
    }

    void display()
    {
        if(size == 0)
        {
            cout << "Array is Empty\n";
            return;
        }
        cout << "Array Elements: ";
        for(int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main()
{
    int choice, type;

    cout << "Select Data Type\n1. Integer\n2. Float\n3. Character\n";
    cin >> type;

    if(type == 1)
    {
        Array<int> a;
        int val;
        do
        {
            cout << "\n1.Insert Begin 2.Insert End 3.Delete Begin 4.Delete End 5.Empty 6.Display 0.Exit\n";
            cin >> choice;

            switch(choice)
            {
                case 1: cin >> val;
                 a.insertAtBeginning(val);
                 break;
                case 2: cin >> val; 
                a.insertAtEnd(val); 
                break;
                case 3: 
                a.deleteFromBeginning();
                 break;
                case 4: 
                a.deleteFromEnd();
                 break;
                case 5: 
                a.emptyArray(); 
                break;
                case 6: 
                a.display();
                 break;
            }
        } while(choice != 0);
    }

    else if(type == 2)
    {
        Array<float> a;
        float val;
        do
        {
            cout << "\n1.Insert Begin 2.Insert End 3.Delete Begin 4.Delete End 5.Empty 6.Display 0.Exit\n";
            cin >> choice;

            switch(choice)
            {
                case 1: cin >> val;
                 a.insertAtBeginning(val); 
                 break;
                case 2: cin >> val; 
                a.insertAtEnd(val); 
                break;
                case 3:
                 a.deleteFromBeginning();
                  break;
                case 4:
                 a.deleteFromEnd();
                  break;
                case 5: 
                a.emptyArray();
                 break;
                case 6: 
                a.display(); 
                break;
            }
        } while(choice != 0);
    }

    else if(type == 3)
    {
        Array<char> a;
        char val;
        do
        {
            cout << "\n1.Insert Begin 2.Insert End 3.Delete Begin 4.Delete End 5.Empty 6.Display 0.Exit\n";
            cin >> choice;

            switch(choice)
            {
                case 1: cin >> val; 
                a.insertAtBeginning(val); 
                break;
                case 2: cin >> val; 
                a.insertAtEnd(val); 
                break;
                case 3:
                 a.deleteFromBeginning();
                  break;
                case 4: 
                a.deleteFromEnd();
                 break;
                case 5: 
                a.emptyArray(); 
                break;
                case 6: 
                a.display();
                 break;
            }
        } while(choice != 0);
    }

    return 0;
}