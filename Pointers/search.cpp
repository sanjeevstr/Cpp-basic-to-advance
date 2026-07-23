#include <bits/stdc++.h>
using namespace std;
int search (int *ptr, int found,int num){

    for (int i = 0; i < 5; i++)
    {
        if (ptr[i] == num)
        {
            cout << "Element Found at index: " << i << endl;
            found = true;
            break;
        }
        
    }
    if (!found)
    {
        cout << "Element Not Found in Array" ;
    }
}
int main() {
    int arr[]= {10,20,30,40,50};

    int num ;
    bool found = false ;

    cout << "Search Number: " ;
    cin >> num;

    search(arr,found,num);

    return 0;
}