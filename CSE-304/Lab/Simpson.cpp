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
#define f(x) (1/(1+x))
Nirob
{
    double n,upper,lower,differ,fast,last,differValue,result=0,stepvalue,main,even=0,odd=0;
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
        stepvalue=f(differValue);
        if(i%2==0)
        {
            even=even+stepvalue;
        }
        if(i%2==1)
        {
            odd=odd+stepvalue;
        }
    }
    cout<<nl;
    main=(differ/3)*((even*2)+(odd*4)+last+fast);
    cout<<"Result : "<<main<<nl;

  return 0;
}