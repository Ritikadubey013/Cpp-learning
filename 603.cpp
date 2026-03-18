//129013044ritikadubey
#include <iostream>
using namespace std;

template <class T>
class Matrix
{
    T mat[10][10];
    int rows, cols;

public:

    void getMatrix()
    {
        cout << "Enter rows and cols: ";
        cin >> rows >> cols;

        cout << "Enter matrix elements:\n";
        for(int i = 0; i < rows; i++)
            for(int j = 0; j < cols; j++)
                cin >> mat[i][j];
    }

    Matrix add(Matrix obj2)
    {
        Matrix temp;

        if(rows != obj2.rows || cols != obj2.cols)
        {
            cout << "Error: Matrix dimensions do not match\n";
            temp.rows = 0;
            temp.cols = 0;
            return temp;
        }

        temp.rows = rows;
        temp.cols = cols;

        for(int i = 0; i < rows; i++)
            for(int j = 0; j < cols; j++)
                temp.mat[i][j] = mat[i][j] + obj2.mat[i][j];

        return temp;
    }

    void display()
    {
        if(rows == 0 || cols == 0)
            return;

        cout << "Result Matrix:\n";
        for(int i = 0; i < rows; i++)
        {
            for(int j = 0; j < cols; j++)
                cout << mat[i][j] << " ";
            cout << endl;
        }
    }
};

int main()
{
    Matrix<int> m1, m2, m3;

    cout << "Matrix 1\n";
    m1.getMatrix();

    cout << "Matrix 2\n";
    m2.getMatrix();

    m3 = m1.add(m2);
    m3.display();

    return 0;
}