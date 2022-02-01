/*
Mehedi Hasan Nirob
Roll: 04
Batch: Day-59
Department of CSE
Dhaka International University
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl endl
#define Nirob int main()
#define getfor(i,n) for(ll i=0;i<n;i++) 

Nirob
{
    double x,y,x1,y1,x2,y2;
    cout<<nl<<"Enter the value of First Coordinates (x1,y1): ";
    cin>>x1>>y1; 
    cout<<"Enter the value of Second Coordinates (x2,y2): ";
    cin>>x2>>y2; 
    cout<<"Enter the point to perform the interpolation X: ";
    cin>>x;
    y=y1+((x-x1)*((y2-y1)/(x2-x1)));
    cout<<"The interpolated value of Y: "<<y<<nl;
  return 0;
}