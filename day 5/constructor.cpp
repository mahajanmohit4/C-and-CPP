#include<iostream>

using namespace std;

class consta
{
    string a;
public:
    consta();
    void show();

};

consta::consta()
{
    cout<<"Enter Number : ";
    cin>>a;

}
void consta::show()
{
    cout<<"The number given by you :";
    cout<<a;
}

int main()
{
    consta c;
    c.show();
}

