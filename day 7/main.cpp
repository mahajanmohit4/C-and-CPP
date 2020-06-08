#include<iostream>

using namespace std;

class box
{
    int l,b,h;
public:
    box()
    {
        cout<<"Enter the L : ";
        cin>>l;
        cout<<"Enter the B ;  ";
        cin>>b;
        cout<<"Enter the H : ";
        cin>>h;
    }
    box(int i)
    {
        l=b=h=i;
    }
    box(int i,int j,int k)
    {
        l=i;
        b=j;
        h=k;
    }
    box(box *p)
    {
        l=p->l;
        b=p->b;
        h=p->h;

    }
    void display()
    {
        cout<<"L is : "<<l<<endl;
        cout<<"B is : "<<b<<endl;
        cout<<"H is : "<<h<<endl;
        cout<<endl;
    }
};

int main()
{
    box bA;
    bA.display();

    box b(10);
    b.display();

    box bC(11,22,44);
    bC.display();

    box bD(&bC);
    bD.display();



    return 0;
}
