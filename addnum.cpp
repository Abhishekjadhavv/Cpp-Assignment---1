// Write a C++ program to add all the numbers of an array of size 10.

#include<iostream>

using namespace std;

int main(){
    int arr[10] = {10,23,43,56,43,21,34,56,7,8};
    int sum = 0;
    
    for(int i = 0;i<=9;i++){
      sum+=arr[i];
    }

    cout<<"Sum of all numbers is "<<sum;
    
    return 0;
}
