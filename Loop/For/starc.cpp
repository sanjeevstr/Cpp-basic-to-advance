#include <bits/stdc++.h>
using namespace std;

int main() {
    int n=6;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j >= 7; j--)
        {
            cout << " ";
        }
        for (int k = i; k <= n; k++)
        {
            cout << "* ";
        }
        cout << endl;
    } 
    return 0;
}