// Write a C++ program to calculate an average of 3 numbers.

#include<iostream>

using namespace std;

int main(){
    int a,b,c,result;

    cout<<"Enter 3 numbers"<<endl;
    cin>>a>>b>>c;
    int sum = a+b+c;
    result = sum/3;
    cout<<"average of 3 numbers is "<<result;
    return 0;
}