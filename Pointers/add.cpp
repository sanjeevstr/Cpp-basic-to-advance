#include <bits/stdc++.h>
using namespace std;
int add (int *ptr, int *p)
{
    int sum = *ptr + *p;

    return sum ;
}
int main() {
    int a= 10;
    int b= 5;

    int *ptr = &a , *p=  &b;

    cout << "Sum = " << add(ptr, p);

    return 0;
}