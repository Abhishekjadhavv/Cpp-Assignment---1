// Write a C++ program to find the maximum of two numbers.

#include<iostream>

using namespace std;

int main(){
    int a,b,max;

    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;

    max = a>b?a:b;

    cout<<"Max number is "<<max;

    return 0;
}