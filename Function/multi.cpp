#include <iostream>
using namespace std;
int Inmultiple(int table)
{
    for (int i = 1; i <= 10; i++)
    {
        cout << table << " * "<< i <<" = " << table*i << endl;
    }
    
    
}
int main()
{
    int table=7;

    Inmultiple(table);

    return 0;
}