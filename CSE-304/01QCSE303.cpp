#include<bits/stdc++.h>
using namespace std;
#define nl endl
#define Nirob int main()
#define f(x) (x*x)-3
#define sp fixed<<setprecision(7)

Nirob
{
    double accuracy,a,b,c,fa,fb,fc;
    int cnt=0;
    again:
    cout<<"Enter two integer value: ";
    cin>>a>>b;
    fa=f(a);
    fb=f(b);
    if(a>b || fa*fb>=0)
    {
        cout<<"Input is Not valid"<<nl;
        goto again;
    }
    cout<<"Enter an Accuracy value: ";
    cin>>accuracy;
    while(true)
    {
        c=(a+b)/2;
        cnt++;
        fc=f(c);
        fa=f(a);
        fb=f(b);
        cout<<sp<<"Iteration:"<<cnt<<" a:"<<a<<" F(a):"<<fa<<" b:"<<b<<" F(b):"<<fb<<" C:"<<c<<" F(c):"<<fc;
        if(fc==0|| fc==accuracy|| abs(fc)<accuracy)
        {
            cout<<"\nTotal Iteration: "<<cnt<<nl;
            cout<<"This is Root: "<<c<<nl;
            return 0;
        }
        else if((fa*fc)<0)
        {
            b=c;
            cout<<"  b=c"<<nl;
        }
        else if((fb*fc)<0)
        {
            a=c;
            cout<<"  a=c"<<nl;
        }
    }
    return 0;
}
