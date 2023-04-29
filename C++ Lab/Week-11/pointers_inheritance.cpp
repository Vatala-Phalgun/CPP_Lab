// Write a Program to illustrate the use of pointers to objects which are related by inheritance.
// INPUTS-
// 100
// 200
#include <iostream>
using namespace std;
class BC
{
public:
    int b;
    void show()
    {
        cout << "b = " << b << endl;
    }
};
class DC : public BC
{
public:
    int d;
    void show()
    {
        cout << "b = " << b << endl;
        cout << "d = " << d << endl;
    }
};
int main()
{
    BC *bptr;
    BC base;
    int a;
    cin >> a;
    bptr = &base;
    bptr->b = a;
    cout << "bptr points to base object" << endl;
    bptr->show();
    DC derived;
    bptr = &derived;
    int der;
    cin >> der;
    bptr->b = der;
    cout << "bptr now points to derived object" << endl;
    bptr->show();
    return 0;
}