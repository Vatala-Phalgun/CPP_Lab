//Searching an element in an array.
#include<iostream>
using namespace std;

int main()
{
    int a[25],i,n,pos,sear;
    cout<<"Enter how many elements you wish to store in the array"<<endl;
    cin>>n;

    cout<<"Enter the elements into array"<<endl;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<"Enter the search element"<<endl;
    cin>>sear;

    for(i=0;i<n;i++)
    {
        if(a[i]==sear)
        {
            pos=i;
            break;
        }
    }
    if(i==n)
    {
        cout<<"Element is not found in the array"<<endl;
    }
    else
    {
        cout<<"The Position of the Element is:"<<pos<<endl;
    }
    return 1; 
    
}
