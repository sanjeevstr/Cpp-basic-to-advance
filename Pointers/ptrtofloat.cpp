#include <iostream>
using namespace std;
int main()
{
    float a = 10.01;
    float *ptr = &a ;

    cout << a << endl;
    cout << &a << endl;
    cout << ptr << endl;
    cout << *ptr << endl;

    return 0;

}