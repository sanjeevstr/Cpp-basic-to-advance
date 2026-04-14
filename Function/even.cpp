#include<iostream>
using namespace std;

int even(int num)

{
   if (num%2==0)
   {
    printf("Even");
   }else{
    printf("Odd");
   }
   

}

int main()
{
    int num;

    cout << "Enter a Number: "<<endl;
    cin >> num ;

    even(num);

    return 0;
}