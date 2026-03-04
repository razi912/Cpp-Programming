// Take two integers and print the larger one.

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "enter a number a:";
    cin >> a;
    cout << "enter second number b:";
    cin >> b;
    if (a > b)
        cout << "a is largest" << endl;
    else
        cout << "b is largest" << endl;
}