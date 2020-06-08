#include <iostream>

using namespace std;


    class circle
    {
        int r;
        const float pie=3.14;
    public :

            circle(int a,float i):pie(i)
            {
                r=a;
            }

            void show()
            {
                cout<<" The value : "<<pie<<endl<<r;
            }

    };

    int main()
    {

        circle c(33,3.14);
        c.show();
        return 0;
    }





