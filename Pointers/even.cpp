#include <bits/stdc++.h>
using namespace std;
void Even(int *ptr) {

    if (*ptr % 2 == 0 )
    {
        cout << "Even";
    }else{
        cout << "Odd" ;
    }
    
}
int main()
{
    int num ;

    cout << "Enter number: ";
    cin >> num ;

    Even(&num);

    return 0;

}