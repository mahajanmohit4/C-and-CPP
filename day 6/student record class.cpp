#include <iostream>

using namespace std;

class student
{
    int roll;
    string name;
    float percentage;
    char grade;

    public:
        void get();
        void show();

};
void student :: get()
{
    cout<<"Roll Number : ";
    cin>>roll;

    cout<<"Enter the name of student : ";
    cin>>name;

    cout<<"Enter the Percentage : ";
    cin>>percentage;

    cout<<"Enter the Grade : ";
    cin>>grade;


}

void student :: show()
{
    cout<<"Student record : ";
    cout<<"Roll No : "<<roll<<endl;

    cout<<"Name : "<<name<<endl;

    cout<<"Percentage : "<<percentage<<endl;

    cout<<"Grade : "<<grade;

}
int main()
{
    student s1;

    for(int i=0;i<=2;i++)
    s1.get();
    s1.show();

    return 0;
}
