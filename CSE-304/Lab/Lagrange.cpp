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
Nirob
{
    int n;
    cout<<"How much value do you want to insert: ";
    cin>>n;
    double x[n],y[n],X,up=1,down=1,yp=0;
    cout<<"Give values of Xi and Yi:"<<nl;
    getfor(i,n)
    cin>>x[i]>>y[i];
    cout<<"Enter value of X: ";
    cin>>X;
    for(int i=0;i<n;i++)
    {
        up=1;
        down=1;
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
               up=up*(X-x[j]);
               down=down*(x[i]-x[j]);
            }
        }
        yp=yp+((up/down)*y[i]);
    } 
    cout<<sp<<"For X="<<X<<", The Lagrange's interpolated value of Y is: "<<yp<<nl;
  return 0;
}