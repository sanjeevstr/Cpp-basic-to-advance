#include<iostream>
using namespace std;
int marks (int m)
{   
    int marks = m;
    if(marks>=90)
    {
        cout<<"A+";
    }
    else if(marks>=75)
    {
        cout<<"A";
    }
    else if(marks>=60)
    {
        cout<<"B+";
    }
    else if(marks>=45)
    {
        cout<<"B";
    }
    else if(marks>=40)
    {
        cout<<"C+";
    }
    else if(marks>=30)
    {
        cout<<"C";
    }
    else
    {
        cout<<"Fail";
    }
}
int main()
{
    int m;
    int fullmarks = 100;
    int failmarks = 40;
    cout<<"Enter the marks: ";
    cin>>m;
    marks(m);
    return 0;
}