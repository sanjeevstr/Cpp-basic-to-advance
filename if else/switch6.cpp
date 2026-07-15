#include <bits/stdc++.h>
using namespace std;

int main() {
    char grade;

    cout << "Enter your Grade (A,B,C,D,F): ";
    cin >> grade;

    switch (grade)
    {
    case 'A':
    case 'a':
        cout << "Super yr";
        break;
    case 'B':
    case 'b':
        cout << "Bahut Badhia";
        break;
    case 'C':
    case 'c':
        cout << "Badhia";
        break;
    case 'D':
    case 'd':
        cout << "achhe se padh";
        break;
    case 'F':
    case 'f':
        cout << "Fail hai tu";
        break;
    default:
    cout << "Sahi se Grade Daal !";
        break;
    }


    return 0;
}