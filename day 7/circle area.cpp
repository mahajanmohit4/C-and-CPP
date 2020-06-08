#include <iostream>

using namespace std;


    class circle
    {
        int r;
        float area;
        const float pie=3.14;
    public :

            circle(int a,float i):pie(i)
            {
                r=a;
                area=pie*r*r;
            }

            void show()
            {
                cout<<" The value : "<<pie<<endl<<"Radius : "<<r<<endl;
                cout<<"Area : "<<area;
            }

    };

    int main()
    {

        circle c(33,3.14);
        c.show();
        return 0;
    }





