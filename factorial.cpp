#include<iostream>
using namespace std;

int main()
{
    int n,i,factorial=1;
    cout << "enter n: " ;
    cin >> n ;

    for(i=1;i<=n;i++)
    {
        factorial*=i;
    }
    cout << "Factorial of " << n << " = " << factorial ;

    return 0;
}