#include<iostream>
using namespace std;
int prime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main ()
{
    int n;

    cout << " Enter a number : " << endl;
    cin >> n;
    int result = prime(n);

    if (result == 1){
        cout<<"prime"<<endl;
    }
    else{
        cout<<"not prime"<<endl;
    }
}