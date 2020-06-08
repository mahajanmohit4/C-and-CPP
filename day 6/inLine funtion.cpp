In line funtion program
which means we can explore the function in class

#include<iostream>

using namespace std;

class mohit
{
    int a;
public:
    void get()
    {
        cout<<"Enter the number : ";
        cin>>a;
    }
    void show()
    {
        cout<<"The number is : ";
        cout<<a;
    }
};

int main()
{
    mohit m;
    m.get();
    m.show();

    return 0;
}
