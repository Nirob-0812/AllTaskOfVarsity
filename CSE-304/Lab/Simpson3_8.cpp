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
#define f(x) 1/(1+x)
Nirob
{
    double n,upper,lower,differ,fast,last,differValue,result=0,stepvalue,main,value=0,multipleof3=0;
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
    int check=3;
    for(int i=1;i<n;i++)
    {
        differValue=differValue+differ;
        stepvalue=f(differValue);
        if(i==check)
        {
            multipleof3=multipleof3+stepvalue;
            check=check+3;
        }
        else
        value=value+stepvalue;
    }
    cout<<nl;
    cout<<fast<<"  "<<last;
    main=(differ*3/8)*((value*3)+(multipleof3*2)+last+fast);
    cout<<"Result : "<<main<<nl;

  return 0;
}