#include<iostream>

using namespace std;

class consta
{
    int a,b,add;

public:

    consta(int x,int y);
    void show(int z);
};


consta::consta(int x, int y)
{
    cout<<"Enter first number  : ";
    cin>>a;
    cout<<"Enter second number :";
    cin>>b;

add=a+b;

}
void consta::show(int z)
{
    cout<<"The Addition of two number :";
    cout<<add;

}

int main()
{
    int first,second,pass;

    consta c(first,second);
   // pass=first+second;
    c.show(pass);
}

