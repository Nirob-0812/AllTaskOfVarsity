#include<bits/stdc++.h>
using namespace std;
#define nl endl
#define Nirob int main()
#define getfor(i,n) for(int i=0;i<n;i++) 

int _binarySearchAscending(int array[],int low,int high,int x)
{
   if(low<=high)
   {
       int mid=(low+high)/2;
       if(array[mid]==x)
       return mid+1;
       else if(array[mid]>x)
       return _binarySearchAscending(array,low,mid-1,x);
       else
       return _binarySearchAscending(array,mid+1,high,x);
   }
   return -1;
}
int _binarySearchDescending(int array[],int low,int high,int x)
{
   if(low<=high)
   {
       int mid=(low+high)/2;
       if(array[mid]==x)
       return mid+1;
       else if(array[mid]>x)
       return _binarySearchDescending(array,mid+1,high,x);
       else
       return _binarySearchDescending(array,low,mid-1,x);
   }
   return -1;
}
Nirob
{
    int cnt=1;
   while (true)
   {
       cout<<cnt<<")"<<nl;
       cout<<"------------Menu----------------"<<nl<<nl;
       cout<<"Press 1 for linear search."<<nl;
       cout<<"Press 2 for Binary search."<<nl;
       cout<<"Press 0 for Exit."<<nl;
       int num;
       cin>>num;
       switch (num)
       {
       case 1:
       {
           cout<<"You have chosen linear search algorithm to solve the problem."<<nl;
           cout<<"Enter how many numbers you want to insert : ";
           bool ok=false;
           int data,serach_item,indx,_value;
           cin>>data;
           int a[data];
           cout<<"Enter the numbers: ";
           getfor(i,data)
           cin>>a[i];
           cout<<"Enter the search item : ";
           cin>>serach_item;
           for(int i=0;i<data;i++)
           {
               if(serach_item==a[i])
               {
                   ok=true;
                   indx=i+1;
                   _value=a[i];
               }
           }
           if(ok)
           {
               cout<<serach_item<<" is present in the location "<<indx<<" in the list."<<nl;
           }
           else
           cout<<"Search item is not in the list"<<nl;
           break;
       }
       case 2:
       {
           cout<<"You have chosen binary search algorithm to solve the problem."<<nl;
           cout<<"------------Menu----------------"<<nl<<nl;
           cout<<"Press 1 for Ascending order input."<<nl;
           cout<<"Press 2 for Descending order input."<<nl;
           cout<<"Press 0 for exit."<<nl;
           cout<<"Enter your choice : ";
           int num,data,serach_item,indx,_value;
           cin>>num;
           switch(num)
           {
               case 1:
               { 
                   cout<<"You have chosen ascending order input for algorithm."<<nl;
                   cout<<"Enter how many numbers you want to insert :";
                   cin>>data;
                   int a[data];
                   cout<<"Enter the numbers: ";
                   getfor(i,data)
                   cin>>a[i];
                   cout<<"Enter the search item : ";
                   cin>>serach_item;
                   int result=_binarySearchAscending(a,0,data,serach_item);
                   if(result==-1)
                   cout<<"The item is not found"<<nl;
                   else
                   cout<<serach_item<<" is present in the location "<<result<<" in the list"<<nl;
                   break;
               }
               case 2:
               { cout<<"You have chosen Decending order input for algorithm."<<nl;
                   cout<<"Enter how many numbers you want to insert :";
                   cin>>data;
                   int a[data];
                   cout<<"Enter the numbers: ";
                   getfor(i,data)
                   cin>>a[i];
                   cout<<"Enter the search item : ";
                   cin>>serach_item;
                   int result=_binarySearchDescending(a,0,data,serach_item);
                   if(result==-1)
                   cout<<"The item is not found"<<nl;
                   else
                   cout<<serach_item<<" is present in the location "<<result<<" in the list"<<nl;
                   break;
               }
               case 0:
               break;
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