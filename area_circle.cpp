// Write a C++ program to calculate the area of a circle

#include<iostream>
using namespace std;

int main(){
    float radius,area;
    cout<<"Enter radius of circle"<<endl;
    cin>>radius;
    area = 3.14 * (radius*radius);
    cout<<"Area of circle is "<<area<<endl;
    return 0;
}