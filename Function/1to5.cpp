#include<iostream>
using namespace std;
int five(int num)
{
    for (int i = 1; i <= num; i++)
    {
       cout << i;
    }
}
int main()
{
    int num;

    cout << "Enter a number : "<< endl;
    cin >> num ;

    five(num);
    return 0;
}