/*                    Mehedi Hasan Nirob
                      Roll: 04
                      Batch: Day-59
                      Department of CSE
                      Dhaka International University
*/
#include<bits/stdc++.h>
using namespace std;
#define nl endl
#define Nirob int main() //5x^3-7x^2+9x
#define f(x) 5*(x*x*x)-7*(x *x)+ 9*x-04
#define f1(x) 15*(x*x)-(14*x)+9
#define sp fixed<<setprecision(5)
                            //Newton Raphson method
Nirob
{
    double accuracy,a,b,x0,x2,fa,fb,fx0,fx1,fx2;
    int cnt=0;
    again:
    cout<<"Enter two integer value: ";
    cin>>a; 
    cin>>b; 
    fa=f(a);
    fb=f(b);
    if(a>=b || fa*fb>=0)
    {
        cout<<"Input is Not valid"<<nl;
        goto again;
    }
    cout<<"Enter an Accuracy value: ";
    cin>>accuracy;
    x0=(a+b)/2;
    while(true)
    {
        fx0=f(x0);
        fx1=f1(x0);
        x2=x0-(fx0/fx1);
        fx2=f(x2);
        cnt++;
        cout<<fixed<<setprecision(5)<<"Iteration:"<<cnt<<" X0:"<<x0<<" F(X0):"<<fx0<<" F1(X0):"<<fx1<<" X2:"<<x2<<" F(X2):"<<fx2;
        if(fx2==0 || abs(fx2)<=accuracy)
        {
            cout<<"\nTotal Iteration: "<<cnt<<nl;
            cout<<"This is Root: "<<x2<<nl;
            return 0;
        }
        else
        {
            x0=x2;
            cout<<"  X0=X2"<<nl;
        }
    }
    return 0;
}
