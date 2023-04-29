//Write a Program which creates & uses array of object of a class.( for eg. implementing the
//list of Managers of a Company having details such as Name, Age, etc..).

#include<iostream>
using namespace std;
class manager
{
    int Eid;
    char Name[30];
    int age;
    public:
    void getdata();
    void putdata();
};
void  manager::getdata()
{
    cout<<"Enter Employee Id: ";
    cin>>Eid;
    cout<<"Enter Employee Name: ";
    cin>>Name;
    cout<<"Enter Employee Age: ";
    cin>>age;
}

void manager::putdata()
{
    cout<<Eid<<" ";
    cout<<Name<<" ";
    cout<<age<<" ";
    cout<<endl;
}
int main()
{
    manager emp[30];
    int n,i;
    cout<<"Enter number of manager";
    cin>>n;
    for(i=0;i<n;i++)
    {
        emp[i].getdata();
    }
        cout<<"Manager data " <<endl;
        for(i=0;i<n;i++)
        {
        emp[i].putdata();
        }
        return 1;
    
}