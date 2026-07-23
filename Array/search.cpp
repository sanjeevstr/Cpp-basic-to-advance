#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[5]= {10,20,30,40,50};
    int num ;

    bool found = true;

    cout << "Search Number: ";
    cin >> num ;


    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == num)
        {
            cout << "Element found at Index: " << i << endl;
            found = true ;
            break;
        }
        
    }
    if (!found)
    {
        cout << "Element Not Found" ;
    }
    
    
    return 0;
}