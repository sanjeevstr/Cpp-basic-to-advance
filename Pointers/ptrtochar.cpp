#include <iostream>
using namespace std;
int main(){
    char str[] = "SANJEEV";
    char *ptr = str;

    cout << str << endl;
    cout << &str <<endl;
    cout << *ptr <<endl;
    cout << ptr << endl;

    return 0;
    
}