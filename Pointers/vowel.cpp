#include <bits/stdc++.h>
using namespace std;

int vowel(char *ptr)
{
    int count = 0;

    while (*ptr != '\0')
    {
        if (*ptr == 'A' || *ptr == 'a' ||
            *ptr == 'E' || *ptr == 'e' ||
            *ptr == 'I' || *ptr == 'i' ||
            *ptr == 'O' || *ptr == 'o' ||
            *ptr == 'U' || *ptr == 'u')
        {
            count++;
        }
        ptr++;
    }

    return count;
}

int main()
{
    char str[100];

    cout << "Enter a string: ";
    cin >> str;

    cout << "Number of vowels = " << vowel(str);

    return 0;
}