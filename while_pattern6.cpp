#include<iostream>
using namespace std;

int main()
{
    int n,count=1;
    int i=1,j;
    cout << "Enter the value of n: ";
    cin >> n;
    while(i<=n)
    {
        j=1;
        while(j<=n)
        {
            cout << count << " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
}