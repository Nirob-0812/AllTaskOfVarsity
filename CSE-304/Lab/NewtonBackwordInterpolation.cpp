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
#define sp fixed<<setprecision(7) 
#define Nirob int main()
#define getfor(i,n) for(int i=0;i<n;i++) 
Nirob
{
    int n;
    cout<<"How much value do you want to insert: ";
    cin>>n;
    float x[n],y[n],dif[n][n],X,a,h,p,yp,dp=1,fact=1;
    cout<<"Give values of Xi and Yi:"<<nl;
    getfor(i,n)
    cin>>x[i]>>y[i];
    a=x[n-1];
    h=x[1]-x[0];
    cout<<"Enter value of X: ";
    cin>>X;
    for(int i=0;i<n-1;i++)
    {
        dif[i][1]=y[i+1]-y[i];
        cout<<sp<<"D1Y"<<i<<": "<<dif[i][1]<<"\t";
    }
    cout<<nl;
    for(int j=2;j<n;j++)
    {
        for(int i=0;i<n-j;i++)
        {
            dif[i][j]=dif[i+1][j-1]-dif[i][j-1];
            cout<<sp<<"D"<<j<<"Y"<<i<<": "<<dif[i][j]<<"\t";
        }
        cout<<nl;
    }
    p=(X-a)/h;
    cout<<sp<<"Here, X="<<X<<" A="<<a<<" H="<<h<<nl<<"So, P="<<p<<nl;
    int j=n-1;
    yp=y[j];
    for(int i=1;i<n;i++)
    {
        dp=dp*(p+i-1);
        fact=fact*i;
        yp=yp+(dp/fact)*dif[j-1][i];
        j--;
        cout<<"Round-"<<i<<": "<<yp<<nl;
    }
    cout<<sp<<"For X="<<X<<", The Interpolated value of Y is: "<<yp<<nl;
    
  return 0;
}