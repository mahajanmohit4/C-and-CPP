#include <iostream>

using namespace std;

class demo
{
    int a,b,add;
public:
    void get();
    void show();

};
void demo::get()
{
    cout<<"Enter the first number : ";
    cin>>a;
    cout<<"\nEnter the second number : ";
    cin>>b;
    add=a+b;
}

void demo::show()
{
    cout<<"Addition of two number : "<<add;
}

int main()
{
    demo obj1;
    demo obj2;
    obj1.get();
    obj1.show();

    return 0;
}
