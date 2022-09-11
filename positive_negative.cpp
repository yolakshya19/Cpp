#include<iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number, num: ";
    cin >> num;

    if(num<0)
    {
        cout <<  num << " is negative ";
    }
    if(num>0)
    {
        cout << num << " is positive ";
    }
    if(num==0)
    {
        cout << num << " is zero";
    }
}