#include<iostream>

using namespace std;

class consta
{
    string a;
public:
    consta(int x);
    void show();

};

consta::consta(int x)
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
    int pass;
    consta c(pass);
    c.show();
}

