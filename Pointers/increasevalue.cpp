#include <iostream>
using namespace std;
int increment(int *ptr)
{
    
    *ptr += 1;
    cout << *ptr <<endl;

    return 0;
}
int main ()
{
    int a = 15;
    int *ptr = &a ;

    increment(ptr);

}