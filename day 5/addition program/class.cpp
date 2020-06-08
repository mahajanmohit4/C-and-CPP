#include <iostream>

using namespace std;

class cpp
{
    int a,b,add;
public:
    void get(int x,int y);
    void show(int ans);

};
void cpp::get(int x,int y)
{

    cout<<"Enter the first Number :";
    cin>>a;
    cout<<"Enter the scond Number :";
    cin>>b;


    add=a+b;
}
void cpp::show(int y)
{
    cout<<"Adition of two Number"<<endl;
    cout<<add;
}

int main()
{
    int first,second,pass;
    cpp c1;
    c1.get(first,second);
    c1.show(pass);
    return 0;
}
