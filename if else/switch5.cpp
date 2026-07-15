#include <bits/stdc++.h>
using namespace std;

int main() {
    char ch;

    cout <<"Enter One Alphabet :";
    cin >> ch;

    switch (ch)
    {
    case 'A':
    case 'a':
    case 'E':
    case 'e':
    case 'I':
    case 'i':
    case 'O':
    case 'o':
    case 'U':
    case 'u':
        cout<< ch << " is Vowel";
            break;

    default:
        cout << ch << " is Consonent" ;
        break;
    }
    return 0;
}