//Input a year and check whether it is a leap year.

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"enter a number:";
    cin>>num;
    if(num%400==0 ||( num% 4==0 && num %100 !=0))
    cout<<"leap year"<<endl;
    else
    cout<<"not a leap year";
    return 0;
}