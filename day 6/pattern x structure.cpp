
#include<iostream>

using namespace std;



int main()
{
    int i,j,k;




    for(i=2;i>0;i--)
    {
        cout<<" *";

        for(j=i;j>0;j--)
        {
            cout<<"    ";




        }
        --j;
        --j;
        --j;
        cout<<" *"<<endl;
        cout<<"  ";
    }
    for(i=0;i<1;i++)
    {
        cout<<"    *"<<endl;
        for(j=0;j<2;j++)
        {
            cout<<"   *"<<"  ";
        }
    }
cout<<endl;
for(i=2;i>0;i--)
    {
        cout<<" *";

        for(j=i;j>0;j--)
        {
            cout<<"    ";




        }
}



    return 0;
}
