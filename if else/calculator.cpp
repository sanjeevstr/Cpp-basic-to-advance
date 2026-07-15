#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    char op;

    cout<< "Enter first number: ";
    cin >> a ;
    cout << "Choose Operator (+,-,*,/,%): ";
    cin >> op;
    cout << "Enter Second Number: ";
    cin >> b;

    switch (op)
    {
    case '+':
        cout << a + b;
        break;
    case '-':
        cout << a - b;
        break;
    case '*':
        cout << a * b;
        break;
    case '/':
        if (b != 0)
            cout<< a / b;
        else 
            cout << "Error Division";
        break;
    case '%':
    if (b!=0)
        cout << a % b;
    else
        cout << "Error Modulus";
        break;
    default:
        cout<< "Invalid number or operator";
        break;
    }


    return 0;
}