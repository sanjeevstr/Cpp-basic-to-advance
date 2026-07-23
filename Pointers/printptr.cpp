#include <bits/stdc++.h>
using namespace std;
int print(int *ptr){
    
    for (int i = 0; i < 5; i++)
    {
        cout << *(ptr + i) << " ";
    }

}

int main() {
    int arr[] = {5,10,15,20,25};

    print(arr);

    return 0;
}