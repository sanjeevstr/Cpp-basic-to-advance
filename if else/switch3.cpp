#include <bits/stdc++.h>
using namespace std;

int main() {
    int days;


    cout << "Enter Manth Name by number (1-12): ";
    cin >> days;

    switch (days)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout <<"31 Days" ;
        break;
    case 2:
        cout << " 28 days if its leap year 29 days";
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        cout << "30 Days";
        break;
    default:
        cout << "Invalid Number";
        break;
    }
    return 0;
}