#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    int i=1,j;
    char ch=65;
    while(i<=n)
    {
        j=1;
        while(j<=n)
        {
            cout << ch << " ";
            j++;
        }
        ch++;
        cout << endl;
        i++;
    }
}