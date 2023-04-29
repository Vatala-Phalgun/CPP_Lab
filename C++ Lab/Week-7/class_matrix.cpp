//Write a Program to design a class to represent a matrix. The class should have the 
//functionality to insert and retrieve the elements of the matrix

#include<iostream>
using namespace std;

class matrix
{
    int **p,d1,d2;
    public:
    matrix(int x,int y);
    void get_element(int i,int j,int value)
    {
        p[i][j]=value;
    }
    int & put_element(int i,int j)
    {
        return p[i][j];
    }

};

matrix :: matrix(int x,int y)
{
    d1=x;
    d2=y;
    p=new int*[d1];
    for(int i=0;i<d1;i++)
    p[i]=new int[d2];
}

int main()
{
    int m,n;
    cout<<"Enter the size of the matrix:"<<endl;
    cin>>m>>n;
    matrix A(m,n);
    cout<<"Enter matrix elements rowwise "<<endl;
    int i,j,value;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>value;
            A.get_element(i,j,value);
        }
    }
    cout<<A.put_element(0,1);
    return 0;
}