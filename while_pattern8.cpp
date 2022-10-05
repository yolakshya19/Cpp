#include<iostream>
using namespace std;

int main()
{
    int n;
    int i=1,j;
    cout << "Enter the value of n: ";
    cin >> n;
    while(i<=n)
    {
        j=1;
        while(j<=i)
        {
            cout << i << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}