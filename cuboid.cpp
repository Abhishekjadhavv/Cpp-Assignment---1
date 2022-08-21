// Write a C++ program to calculate the volume of a cuboid.

#include<iostream>

using namespace std;

int main(){
    int l,w,h,volume;

    cout<<"Enter length, Width, and Height of cuboid"<<endl;
    cin>>l>>w>>h;

    volume = l*w*h;
   
    cout<<"volume is "<<volume;
    return 0;
}