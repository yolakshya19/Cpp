#include<iostream>
using namespace std;

int main()
{
    int n,i,c=0;
    cout << "enter the number, n: " ;
    cin >> n ;

    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==0)
    {
        cout << n << " is a prime number" ;
    }
    else
    {
        cout << n << " is not a prime number" ;
    }
    return 0;
}