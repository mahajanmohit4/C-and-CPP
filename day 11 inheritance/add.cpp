#include<iostream>

using namespace std;

class num
{
protected:

    int a,b;
public:
    num(int i,int j)
    {
        a=i;
        b=j;

    }
    void show()
    {
        cout<<"a= "<<a<<endl;
        cout<<"b= "<<b<<endl;

    }

};

class addnum: public num
{
protected:

    int c;
public:


    addnum(int i,int j):num(i,j)
    {
        c=a+b;

    }
    void show()
    {

        cout<<"addition : "<<c<<endl;

    }

};

class diff: public num
{
protected:
    int d;
public:


    diff(int x,int y):num(x,y)
    {
        d=a-b;
    }
    void show()
    {
        num::show();
        cout<<" sub : "<<d;

    }


};

int main()
{
    addnum a(10,20);
     a.show();
    diff b(20,10);

    b.show();

    return 0;
}
