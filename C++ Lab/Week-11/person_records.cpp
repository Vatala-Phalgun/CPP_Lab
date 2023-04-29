// Write a program to maintain the records of person with details (Name and Age) and find the
// eldest among them. The program must use this pointer to return the result.
// INPUTS-
// John
// 23
// Vimal
// 24
#include <iostream>
using namespace std;
class Person
{
    char Name[20];
    int Age;

public:
    void getData()
    {
        // cout<<"Enter Person Name:";
        // gets(Name);
        cin >> Name;
        // cout<<"Enter Person Age:";
        cin >> Age;
    }
    void putData()
    {
        // cout<<"\n\nDetails About Eldest Person as follows:";
        cout << "Name = " << Name << endl;
        cout << "Age  = " << Age << endl;
    }
    Person &Compare(Person &p1)
    {
        if (p1.Age > this->Age)
            return p1;
        return *this;
    }
};
int main()
{
    Person x, y, z;
    x.getData();
    y.getData();
    z = x.Compare(y);
    z.putData();
    return 0;
}