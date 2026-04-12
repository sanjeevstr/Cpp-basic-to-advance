#include <iostream>
using namespace std;
int main()
{
    char ch ;

    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 'a'&& ch <='z' || ch >= 'A' && ch <= 'Z')
    {
        cout << " %c You entered an alphabet." << endl;
    }
    else if (ch >= '0' && ch <= '9')
    {
        cout << " %c You entered a digit." << endl;
    }
    else
    {
        cout << " %c You entered a special character." << endl;
    }
    return 0;
}