#include <bits/stdc++.h>
using namespace std;

int value(int a ) {
    int *p = &a;
    cout << a << "\n";
    cout << &a << "\n";
    cout << &p << "\n";
    cout << *p<< "\n";

    int c = *p;

    cout << c << endl;


    return 0;
}

int fun(int x){

    int *p = &x;

    cout << "Value of x = " << x << endl;
    cout << "Address of x = " << &x << endl;
    cout << "Pointer stores = " << p << endl;
    cout << " value using Pointer = " << *p << endl;
 

}

int main ()
{
    int x = 15;
    int *p = &x;
    *p += 1;

    cout << x << "\n";

    int a = 10;

    value(a);

    cout << fun(x);

    return 0;
}



