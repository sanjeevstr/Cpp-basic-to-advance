#include<iostream>
using namespace std;
int main()
{
    int n;

    cout << "Enter a Numbere: ";
    cin >> n;

    if (n<18)
    {
        cout << "You are a minor." << endl;
    }
    else
    {
        cout << "You are an adult." << endl;
    }
    
    return 0;
}