// Write a program for developing a matrix class which can handle integer matrices of different
// dimensions. Also overload the operator for addition, multiplication & comparison of
// matrices.
#include <iostream>
using namespace std;
int n;
class matrix
{
    int n;
    int **a;

public:
    matrix(int nn)
    {
        n = nn;
        a = new int *[n];
        for (int i = 0; i < n; i++)
        {
            a[i] = new int[nn];
        }
    }
    friend matrix operator+(matrix m1, matrix m2);
    friend matrix operator*(matrix m1, matrix m2);
    friend bool operator==(matrix m1, matrix m2);
    void getMatrix()
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
    }
    void printMatrix()
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
};

matrix operator+(matrix m1, matrix m2)
{
    matrix temp(3);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            temp.a[i][j] = m1.a[i][j] + m2.a[i][j];
        }
    }
    return temp;
}

matrix operator*(matrix m1, matrix m2)
{
    matrix temp(3);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            temp.a[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                temp.a[i][j] += m1.a[i][k] * m2.a[k][j];
            }
        }
    }
    return temp;
}

bool operator==(matrix m1, matrix m2)
{
    int flag = 33;
    for (int i = 0; i < n; i++)
    {
        if (flag == 33)
        {
            for (int j = 0; j < n; j++)
            {
                if (m1.a[i][j] == m2.a[i][j])
                {
                    flag = 33;
                }
                else
                {
                    flag = 44;
                    break;
                }
            }
        }
        else
        {
            break;
        }
    }
    if (flag == 33)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    cin >> n;
    matrix m1(n), m2(n), m3(n), m4(n);

    m1.getMatrix();
    m2.getMatrix();

    m3 = m1 + m2;
    cout << "Addition of two given Matrices is : " << endl;
    m3.printMatrix();
    m4 = m1 * m2;
    cout << "Multiplication of two given Matrices is : " << endl;
    m4.printMatrix();

    bool a = m1 == m2;

    if (a)
    {
        cout << "The matrices are equal" << endl;
    }
    else
    {
        cout << "The matrices are not equal" << endl;
    }

    return 0;
}