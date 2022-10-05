#include<iostream>
using namespace std;

int main()
{
    int n,c=1;
    int i=1,j;
    cout << "Enter the value of n: ";
    cin >> n;
    while(i<=n)
    {
        j=1;
        while(j<=i)
        {
            cout << c << " ";
            j++;
            c++;
        }
        cout << endl;
        i++;
    }
}