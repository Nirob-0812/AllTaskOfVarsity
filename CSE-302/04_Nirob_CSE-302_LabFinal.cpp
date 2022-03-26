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
#define getfor(i,n) for(int i=0;i<n;i++) 
Nirob
{
    int cnt=1;
    while(true)
    {
        cout<<cnt<<")"<<nl;
        cout<<"---------------Menu------------------"<<nl;
        cout<<"1.Press 1 for insertion order sorting."<<nl;
        cout<<"2.Press 2 for selection order sorting."<<nl;
        cout<<"3.Press 0 for exit"<<nl<<nl;
        cout<<"Enter your choice :";
        int num;
        cin>>num;
        switch(num)
        {
             
            case 1:
            {
                cout<<"You have chosen insertion sorting algorithm for sorting.";
                cout<<nl<<"---------------Menu-----------------------"<<nl;
                cout<<"1.Press 1 for ascending order sorting."<<nl;
                cout<<"2.Press 2 for descending order sorting."<<nl;
                cout<<"3.Press 0 for exit"<<nl<<nl;
                cout<<"Enter your choice :";
                int num;
                cin>>num;
                switch(num)
                {
                    case 1:
                    {
                        cout<<nl<<"You have chosen ascending order sorting."<<nl;
                        cout<<"Enter how many numbers do you need to sort :";
                        int data,key,j;
                        cin>>data;
                        int a[data];
                        cout<<"Enter the numbers:-"<<nl;
                        getfor(i,data)
                        {
                            cout<<"Enter your "<<i+1<<" number: ";
                            cin>>a[i];
                        }
                        for(int i=1;i<data;i++)
                        {
                            key=a[i];
                            j=i-1;
                            while(j>=0 && a[j]>key)
                            {
                                a[j+1]=a[j];
                                j=j-1;
                            }
                            a[j+1]=key;
                        }
                        cout<<"After using insertion sort algorithm in ascending order :";
                        getfor(i,data)
                        cout<<a[i]<<" ";
                        cout<<nl;
                        break;
                    }
                    case 2:
                    {
                        cout<<nl<<"You have chosen descending order sorting."<<nl;
                        cout<<"Enter how many numbers do you need to sort :";
                        int data,key,j;
                        cin>>data;
                        int a[data];
                        cout<<"Enter the numbers:-"<<nl;
                        getfor(i,data)
                        {
                            cout<<"Enter your "<<i+1<<" number: ";
                            cin>>a[i];
                        }
                        for(int i=1;i<data;i++)
                        {
                            key=a[i];
                            j=i-1;
                            while(j>=0 && a[j]<key)
                            {
                                a[j+1]=a[j];
                                j=j-1;
                            }
                            a[j+1]=key;
                        }
                        cout<<"After using insertion sort algorithm in descending order :";
                        getfor(i,data)
                        cout<<a[i]<<" ";
                        cout<<nl;
                        break;
                    }
                    case 0: break;
                }
                break;
            }
            case 2:
            {
                cout<<"You have chosen selection sorting algorithm for sorting.";
                cout<<nl<<"---------------Menu-----------------------"<<nl;
                cout<<"1.Press 1 for ascending order sorting."<<nl;
                cout<<"2.Press 2 for descending order sorting."<<nl;
                cout<<"3.Press 0 for exit"<<nl<<nl;
                cout<<"Enter your choice :";
                int num;
                cin>>num;
                switch(num)
                {
                    case 1:
                    {
                        cout<<nl<<"You have chosen ascending order sorting."<<nl;
                        cout<<"Enter how many numbers do you need to sort :";
                        int data,max_value;
                        cin>>data;
                        int a[data];
                        cout<<"Enter the numbers:-"<<nl;
                        getfor(i,data)
                        {
                            cout<<"Enter your "<<i+1<<" number :";
                            cin>>a[i];
                        }
                        for(int i=0;i<data-1;i++)
                        {
                            max_value=i;
                            for(int j=i+1;j<data;j++)
                            {
                                if(a[j]<a[max_value])
                                max_value=j;
                            }
                            swap(a[i],a[max_value]);
                        }
                        cout<<"After using selection sort algorithm in ascending order: ";
                        getfor(i,data)
                        cout<<a[i]<<" ";
                        cout<<nl;
                        break;
                    }
                    case 2:
                    {
                        cout<<nl<<"You have chosen descending order sorting."<<nl;
                        cout<<"Enter how many numbers do you need to sort :";
                        int data,max_value;
                        cin>>data;
                        int a[data];
                        cout<<"Enter the numbers:-"<<nl;
                        getfor(i,data)
                        {
                            cout<<"Enter your "<<i+1<<" number :";
                            cin>>a[i];
                        }
                        for(int i=0;i<data-1;i++)
                        {
                            max_value=i;
                            for(int j=i+1;j<data;j++)
                            {
                                if(a[j]>a[max_value])
                                max_value=j;
                            }
                            swap(a[i],a[max_value]);
                        }
                        cout<<"After using selection sort algorithm in descending order: ";
                        getfor(i,data)
                        cout<<a[i]<<" ";
                        cout<<nl;
                        break;
                    }
                    case 0: break;
                }
                break;
            }
            case 0: return 0;
                break;
        }
        cnt++;
    }
  return 0;
}