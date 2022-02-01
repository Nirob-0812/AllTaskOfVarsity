/*                    Mehedi Hasan Nirob
                      Roll: 04
                      Batch: Day-59
                      Department of CSE
                      Dhaka International University
*/
#include<bits/stdc++.h>
using namespace std;
#define f(x) (x*x)-3
#define nl endl
int main()
{
    double accuracy,a,b,c,fa,fb,fc;
    int cnt=0;
    cin>>a>>b;
    cin>>accuracy;
    while(true)
    {
        c=(a+b)/2;//2 f(x)=x^2-3
        cnt++;
        fc=f(c);
        fa=f(a);
        fb=f(b);
         cout<<"Iteration:"<<cnt<<" a:"<<a<<" F(a):"<<fa<<" b:"<<b<<" F(b):"<<fb<<" C:"<<c<<" F(c):"<<fc<<nl;
        if(fc==0 || abs(fc)==accuracy|| abs(fc)<accuracy)
        {
            cout<<"Total Iteration: "<<cnt<<nl;
            cout<<"This is Root: "<<c<<nl;
            return 0;
        }
        else if((fc*fa)<0)
        b=c;
        else if((fc*fb)<0)
        a=c;
    }
    return 0;
}
