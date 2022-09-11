#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter any character, ch: ";
    cin >> ch;

    if(ch>=49 && ch<=57)
    {
        cout << ch << " is Numeric";
    }
    else if(ch>=65 && ch<=90)
    {
        cout << ch << " is Uppercase alphabet";
    }
    else if(ch>=95 && ch<=122)
    {
        cout << ch << " is Lowercase alphabet";
    }
    else
    {
        cout << "Invalid input";
    }
}