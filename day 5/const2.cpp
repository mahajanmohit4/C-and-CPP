#include<iostream>

using namespace std;

class consta
{
    string a;
public:
    consta(int x);
    int show();

};

consta::consta(int x)
{
    cout<<"Enter Number : ";
    cin>>a;

}
int consta::show()
{
    cout<<"The number given by you :";
    cout<<a;
    return 0;
}

int main()
{
    int pass;
    consta c(pass);
    c.show();
}

