#include <bits/stdc++.h>
using namespace std;
int stringlength (char *ptr){
    int count = 0;

    while (*ptr != '\0')
    {
        count++;
        ptr++;
    }

    return count;
}
int main() {
    char str[100];

    cout << "Enter a string: " ;
    cin >> str ;

    cout << "Length : " << stringlength(str);

    return 0;
}