#include<iostream>

using namespace std;

class demo
{
    int a,b,c;
public:
    demo(int p,int q);
    demo(int r);
    void show();

};

demo :: demo(int r)
{
     c=a+b;
     cout<<a;
}

demo::demo (int p,int q)
{
    cin>>a>>b;
}

void demo::show()
{
   // cout<<c;

}

int main()
{int p,q,r;

    demo d2(p,q);
   demo d1(r);
   //d2.show();
    return 0;

}











