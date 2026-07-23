#include <bits/stdc++.h>
using namespace std;

void larger(int *p, int *q) {

    if (p == q)
    {
        cout << " Both are Equal " << endl;
    }else if (p < q ){
        cout << *p << " is larger than " << *q <<endl;
    }else {
        cout << *q << " is larger than " << *p <<endl;
    }
}
int main ()
{
    int a,b;

    int *p = &a;
    int *q = &b;

    for (int i = 1; i <= 2; i++)
    {
        cout << "Enter Number " << i << " : ";
        if (i == 1)
            cin >> a;
        else
            cin >> b;
    }

    larger(p,q);

    return 0;
}