#include <iostream>

using namespace std;

class abst
{
    int a,b,c;
    public:
        abst();
        void showA();
        void showB();

};
abst::abst()
{
    cout<<"Enter value A : ";
    cin>>a;
    cout<<"Enter value B : ";
    cin>>b;

    c=a+b;
}
void abst::showA()
{
    cout<<a<<"  "<<b<<endl;
    cout<<c;

}

int main()
{
    abst a;
    a.showA();


    return 0;
}
