/*
Mehedi Hasan Nirob
Roll: 04
Batch: Day-59
Department of CSE
Dhaka International University
*/
#include<bits/stdc++.h>
using namespace std;
#define nl endl
#define sp fixed<<setprecision(5) 
#define Nirob int main()
#define getfor(i,n) for(int i=0;i<n;i++) 
#define f(x) (sqrt(1+x*x))
Nirob
{
    double n,upper,lower,differ,fast,last,differValue,result=0,stepvalue,main;
    cout<<"How many number you want to Devide: ";
    cin>>n;
    cout<<"Enter Upper Limit: ";
    cin>>upper;
    cout<<"Enter Lower Limit: ";
    cin>>lower;
    differ=(upper-lower)/n;
    fast=f(lower);
    last=f(upper);
    //cout<<fast<<"    "<<last;
    differValue=lower;
   // cout<<nl;
    for(int i=1;i<n;i++)
    {
        differValue=differValue+differ;
        stepvalue=2*(f(differValue));
        result=result+stepvalue;
    }
    cout<<nl;
    main=(differ/2)*(abs(result+last+fast));
    cout<<"Result : "<<main<<nl;

  return 0;
}