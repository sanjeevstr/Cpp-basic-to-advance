#include <bits/stdc++.h>
using namespace std;
int pointer(int *ptr)
{
    cout << "Input: " << endl;
    for (int i = 1; i <= 5; i++)
    {
        cin >> ptr[i];
    }
    cout << "Output: " ;

    for (int i = 1; i <=5; i++)
    {
        cout << ptr[i] << " ";
    }

}
int main()
{
    int arr[5];

    pointer(arr);

}