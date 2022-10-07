#include<iostream>
using namespace std;

int main()
{
    int n,c;
    int i=1,j;
    cout << "Enter the value of n: ";
    cin >> n;
    while(i<=n)
    {
        j=1;
        c=i;
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