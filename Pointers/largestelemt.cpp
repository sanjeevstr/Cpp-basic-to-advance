#include <bits/stdc++.h>
using namespace std;

int findLargest(int *ptr, int n) {
    int largest = *ptr;
    
    for (int i = 1; i < n; i++) {
        if (*(ptr + i) > largest) {
            largest = *(ptr + i);
        }
    }
    
    return largest;
}

int main()
{
    int n ;

    cout << "Enter Elements in a Array : ";
    cin >> n;

    int arr[n] ;

    for (int  i = 0; i <=n-1; i++)
    {
        cout << "Enter element at Index " << i << ": ";
        cin >> arr[i];
    }
    
    cout << "Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    cout << "\nLargest element: " << findLargest(arr, n) << endl;
    
    return 0;
}