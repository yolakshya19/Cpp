#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    int i=1,j;
    char ch;
    while(i<=n)
    {
        j=1;
        ch=65;
        ch=ch+i-1;
        while(j<=n)
        {
            cout << ch << " ";
            j++;
            ch++;
        }
        cout << endl;
        i++;
    }
}