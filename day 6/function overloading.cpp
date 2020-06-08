#include <iostream>

using namespace std;

class student
{
    int a,b;

    public:
        void get(int);
        void get(int,int);

};
void student :: get(int a)
{

    cout<<"Funtion : "<<a<<endl;

}

void student :: get(int a,int b)
{

    cout<<"fountion overloaded : "<<a<<"   "<<b;


}


int main()
{
    student s1;

    int a=10,b=20;
   // for(int i=0;i<=1;i++)
    s1.get(a);
    s1.get(a,b);

    return 0;
}
