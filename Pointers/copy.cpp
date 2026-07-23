#include <bits/stdc++.h>
using namespace std;
void copy(int *ptr){

    int copy[5];
    for (int i = 0; i < 5; i++)
    {
        copy[i] = ptr[i];
    }
    for (int i = 0; i < 5 ; i++)
    {
        cout << copy[i] << " ";
    }
    
}
int main() {
    int arr[5]= {1,2,3,4,5};

    copy(arr);


    return 0;
}