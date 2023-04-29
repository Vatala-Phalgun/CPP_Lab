#include<iostream>
using namespace std;

class Time
{
    private:
    int hours;
    int mins;
    public:
    Time()
    {
        hours=0;
        mins=0;
    }
    Time(int t)
    {
        hours=t/60;
        mins=t%60;
    }
    void display()
    {
        cout<<"Time = "<<hours<<" hrs and "<<mins<<" mins"<<endl;
    }
};

int main()
{
    Time T1;
    int dur;
    cin>>dur;
    T1=dur;
    T1.display();
    return 0;
}