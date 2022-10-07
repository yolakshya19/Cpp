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
        j=i;
        while(j>=1)
        {
            cout << j << " ";
            j--;
        }
        cout << endl;
        i++;
    }
}