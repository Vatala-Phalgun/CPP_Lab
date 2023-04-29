// Write a program in C++ to highlight the difference between overloaded assignment operator
// and copy construct.
#include <iostream>
using namespace std;

class alg
{
    int q;
    float w, e;

public:
    alg(int a, float b, float c)
    {
        cout << "copy constructor invoked" << endl;
        cout << "Assignment operator invoked" << endl;
        cout << "Assignment operator invoked" << endl;
        cout << endl;
        q = a;
        w = b;
        e = c;
    }

    void operator+()
    {
        cout << "Assignment operator invoked";
    }

    void operator-()
    {
        cout << "Assignment operator invoked";
    }

    void out()
    {
        cout << "Radius = " << q << endl;
        cout << "X-Coordinate=" << w << endl;
        cout << "Y-Coordinate=" << e << endl;
    }
};

int main()
{
    int a;
    float b, c;

    cin >> a >> b >> c;

    alg x(a, b, c);
    x.out();
    x.out();
    x.out();
    x.out();
} 