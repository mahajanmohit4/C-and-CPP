#include <iostream>

using namespace std;

class Car
{
    int a,b,c;
    string s;
    public:
        Car();
        void showA();
        void showB();

};

Car::Car()
{
    cout<<"Enter value A : ";
    cin>>a;
    cout<<"Enter value B : ";
    cin>>b;
    cout<<"Enter Char C : ";
    cin>>s;


}
void Car::showA()
{
    cout<<a<<"  "<<b<<endl;
    cout<<a<<"   "<<b;


}


void Car::showB()
{
    cout<<"\n    "<<s;
}


int main()
{
    Car a;
    a.showA();
    cout<<endl;
    a.showB();


    return 0;
}
