#include<bits/stdc++.h>
using namespace std;
#define f(x) 5*(x*x*x)-7*(x*x)+ 9*x-4 //(Roll diba)

int main()
{
    double ac,a,b,c,fa,fb,fc;
    sc:
    cout<<"Give two integer Value: ";
    cin>>a>>b;
    fa=f(a);
    fb=f(b);
    if(a>b || fa*fb>=0)
    {
        cout<<"Input is invalid"<<endl;
        goto sc;
    }
    cout<<"Give Accuracy value: ";
    cin>>ac;
    int i=1;
    while(true)
    {
        fa=f(a);
        fb=f(b);
        c=a-fa*((b-a)/(fb-fa));
        fc=f(c);
        cout<<fixed<<setprecision(5)<<"Iteration:"<<i<<" X0:"<<a<<" F(X0):"<<fa<<" X1:"<<b<<" F(X1):"<<fb<<" X2:"<<c<<" F(X2):"<<fc;
        if(fc==0|| fc==ac|| abs(fc)<ac)
        {
            cout<<endl;
            cout<<"Total Iteration: "<<i<<endl;
            cout<<"The Root is: "<<c<<endl;
            return 0;
        }
        else if((fa*fc)<0)
        {
            b=c;
            cout<<"  X1=X2"<<endl;
        }
        else if((fb*fc)<0)
        {
            a=c;
            cout<<"  X0=X2"<<endl;
        }
        i++;
    }
    return 0;
}