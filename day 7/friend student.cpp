#include <iostream>

using namespace std;


class student
{
 int roll,id,marks;
public:

    student()
    {
        cout<<"Enter the roll : ";
        cin>>roll;
        cout<<"Enter the id : ";
        cin>>id;
        cout<<"Enter the marks : ";
        cin>>marks;

    }

    friend void display(student s1);

};

    void display(student s1)
    {
         cout<<"Roll : ";
        cout<<s1.roll<<endl;
        cout<<"Id : "<<s1.id<<endl;
        cout<<"Marks : "<<s1.marks<<endl;

    }

    int main()
    {
        student s1;

        display(s1);
        return 0;
    }





