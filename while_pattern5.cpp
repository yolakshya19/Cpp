#include<iostream>
using namespace std;

int main()
{
    int n,count;
    int i=1,j;
    cout << "Enter the value of n: ";
    cin >> n;
    while(i<=n)
    {
        count=n;
        j=1;
        while(j<=n)
        {
            cout << count << " ";
            count--;
            j++;
        }
        cout << endl;
        i++;
    }
}