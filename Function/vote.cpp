#include<iostream>
using namespace std;
int vote (int age)
{
 if (age>=18)
 {
    printf("Adult \n");
    printf("Yoou can vote ");
 }else{
    printf("Minor \n");
    printf("Bache ghar jao ");
 }
 
}

int main ()
{
    int age;

    cout << " Enter your age: " <<endl;
    cin >> age ;

    vote (age);

}