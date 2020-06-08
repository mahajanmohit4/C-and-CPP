
//pass by value
#include<iostream>

using namespace std;
void swap(int *p,int *q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;



}
int main()
{
    int a,b;
    cout<<"Enter the first Number : ";
    cin>>a;

    cout<<"Enter the second Number : ";
    cin>>b;

    swap(&a,&b);

    cout<<"Swap : "<<a<<"   "<<b;

    return 0;

}
