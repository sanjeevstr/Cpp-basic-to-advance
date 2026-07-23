#include <bits/stdc++.h>
using namespace std;

int add (int *ptr){

    int sum = 0;

    for (int i = 0; i < 6; i++)
    {
        sum = sum + *(ptr + i) ;
    }
    
    return sum;
}
int main() {

    int arr[6]={11,34,54,78,59,43};

    cout << "Sum: " << add(arr);

    return 0;
}