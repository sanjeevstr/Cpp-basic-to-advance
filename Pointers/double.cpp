#include <bits/stdc++.h>
using namespace std;
int doublevalue(int *ptr){
    *ptr = *ptr * 2;

    cout << *ptr ;

}
int main() {
    int num;

    cout << "Enter Number: " ;
    cin >> num ;

    doublevalue(&num);

    return 0;
}