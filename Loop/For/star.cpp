#include <bits/stdc++.h>
using namespace std;

int main() {
    int num=1;

    for (int i = 1; i < 4; i++)
    {
        for (int j = 5 - i; j > 0  ; j--)
        {                                                                      
            cout <<"  ";
        }
        for (int k = 1; k <= i ; k++)
        {
            cout<<num<<" ";
            num++;
        }
        cout<<"\n";
    }
    for (int i = 4; i >= 1; i--)
    {
        for (int j = 5 - i; j > 0; j--)
        {
            cout << "  ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << num << " ";
            num--;
        }
        cout << "\n";
    }
    return 0;
}
