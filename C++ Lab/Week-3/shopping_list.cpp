//Write a Program using class to process Shopping List for a Departmental Store. The list
//include details such as the Code No and Price of each item and perform the operations like
//Adding, Deleting Items to the list and Printing the Total value of a Order.

#include<iostream>
using namespace std;

const int m = 50;

class shop
{
    int Codeno[50];
    int price[50];
    int count;

public:
void cnt(void)
{
    count=0;
}
void getitem(void)
{
    cout<<"enter item code:";
    cin>>Codeno[count];
    cout<<"enter item cost:";
    cin>>price[count];
    count++;
}

void displaysum(void)
{
    float sum=0;
    for(int i=0;i<count;i++)
        sum=sum+price[i];
    cout<<"\n Total Value: "<<sum<<endl;
}

void remove(void)
{
    int a;
    cout<<"enter item code : ";
    cin>>a;
    for(int i=0;i<count;i++)
    if(Codeno[i]==a)
    price[i]=0;

}
void displayitems(void)
{
    cout<<"\ncode \t price\n";
    for(int i=0;i<count;i++)
    {
        cout<<Codeno[i]<<"\t"<<price[i]<<"\n";
    }
    cout<<"\n";
}
};

int main()
{
    shop order;
    order.cnt();
    int x;
    do{
        cout<<"\n You can do the following: "<<"Enter Appropriate number\n";
        cout<<"\n1.Add an item";
        cout<<"\n2.display total value";
        cout<<"\n3. delete an item";
        cout<<"\n4.display all items";
        cout<<"\n5. quit";
        cout<<"\nwhat is your option: ";
        cin>>x;
        switch(x)
        {
            case 1:
            order.getitem();
            break;
            case 2:
            order.displaysum();
            break;
            case 3:
            order.remove();
            break;
            case 4:
            order.displayitems();
            break;
            case 5:
            break;
            default:
            cout<<"Error in input ; try again \n";
        }
    }while(x!=5);
    return 0;
}