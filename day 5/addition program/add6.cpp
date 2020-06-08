#include<iostream>
using namespace std;

void add(int &a,int &b)
{
    //int a,b;
    int add,x,y;

    cout<<"Enter the first number :";
    cin>>x;
    cout<<"Enter the second number :";
    cin>>y;
    add=x+y;
    cout<<"Addition is :"<<add;
}
int main()
{
    int *x,*y;
    add(*x,*y);

return 0;
}
