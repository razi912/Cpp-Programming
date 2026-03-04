//Take two integers as input and print: their sum, difference, product, quotient

#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter a no";
    cin>>a;
    cout<<"Enter second no";
    cin>>b;

   int sum = a+b;
   int diff = a-b;
   int prod = a*b;
   int div = a/b;

   cout<<sum<<endl;
   cout<<diff<<endl;
   cout<<prod<<endl;
   cout<<div<<endl;

    return 0;

}