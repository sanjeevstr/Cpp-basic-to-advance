#include <bits/stdc++.h>
using namespace std;

int main() {
    int marks ;

    cout <<"Enter Obtained Marks: " ;
    cin >> marks;

    if (marks > 80)
    {
        cout << "Grade A" ;
    }
    else if (marks > 70)
    {
        cout <<"Grade B";
    }else if (marks > 50)
    {
        cout << "Grade C" ;
    }
    else if (marks > 33){
        cout << "Grade D";
    }
    else
    {
        cout <<"Fail";
    }
    return 0;
}