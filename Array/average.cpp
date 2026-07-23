#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[5]= {10,20,30,40,50};
    int sum = 0, count = 0;
    int avg;

    for (int i = 0; i < 5; i++)
    {
        
    }
    
    for(int i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
        count++;
    }
    avg = sum / count;

    cout << avg ;
    return 0;
}