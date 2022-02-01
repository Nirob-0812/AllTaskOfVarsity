/*                    Mehedi Hasan Nirob
                      Roll: 04
                      Batch: Day-59
                      Department of CSE
                      Dhaka International University
*/
#include<bits/stdc++.h>
using namespace std;
#define nl endl
#define Nirob int main()
#define f(x) 5*(x*x*x)-7*(x*x)+ 9*x-04
#define sp fixed<<setprecision(5)
                              //False position method
Nirob
{
    double accuracy,x0,x1,x2,fx0,fx1,fx2;
    int cnt=0;
    again:
    cout<<"Enter two integer value: ";
    cin>>x0; 
    cin>>x1; //x1=2
    fx0=f(x0);
    fx1=f(x1);
    if(x0>=x1 || fx0*fx1>=0)
    {
        cout<<"Input is Not valid"<<nl;
        goto again;
    }
    cout<<"Enter an Accuracy value: ";
    cin>>accuracy;
    while(1)
    {
        fx0=f(x0);
        fx1=f(x1);
        x2=x0-fx0*((x1-x0)/(fx1-fx0));
        fx2=f(x2);
        cnt++;
        cout<<fixed<<setprecision(5)<<"Iteration:"<<cnt<<" X0:"<<x0<<" F(X0):"<<fx0<<" X1:"<<x1<<" F(X1):"<<fx1<<" X2:"<<x2<<" F(X2):"<<fx2;
        if(fx2==0|| abs(fx2)==accuracy || abs(fx2)<accuracy)
        {
            cout<<"\nTotal Iteration: "<<cnt<<nl;
            cout<<"This is Root: "<<x2<<nl;
            return false;
        }
        else if((fx0*fx2)<0)
        {
            x1=x2;
            cout<<"  X1=X2"<<nl;
        }
        else if((fx1*fx2)<0)
        {
            x0=x2;
            cout<<"  X0=X2"<<nl;
        }
    }
    return 0;
}
