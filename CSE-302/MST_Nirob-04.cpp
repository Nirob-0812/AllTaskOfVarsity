 /*
Mehedi Hasan Nirob
Roll: 04
Batch: Day-59
Department of CSE
Dhaka International University
*/
#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
#define ll long long int
#define nl endl
#define pb push_back 
#define Nirob int main()
#define testcase ll t; cin>>t; while(t--)
#define getfor(i,n) for(ll i=0;i<n;i++) 
#define sort_array sort(vi.begin(),vi.end());
#define inf 99999
#define index 100

int node,edge,u,v,source,value,cnt=0;
int graph[index][index];
bool selected[index];
 
Nirob
{
    cout<<"Enter number of Node & Edge: ";
    cin>>node>>edge; 
    cout<<"Enter adjacent [u][v] and Weight: "<<endl;
    getfor(i,edge)
    {
        cin>>u>>v>>value;
         graph[u][v]=value;
         graph[v][u]=value;
    }
    memset(selected, false, sizeof(selected));
    int x,y;
    selected[0]=true;
    cout<<"Edge and their weight :"<<nl;
    while (cnt<node-1)
    {
        x=0,
        y=0;                                     
        int min=inf;
        for(int i=0;i<node;i++)
        {
            if(selected[i])
            {
                for(int j=0;j<node;j++)
                {
                    if(!selected[j] && graph[i][j])
                    {
                        if(min>graph[i][j])
                        {
                            min=graph[i][j];
                            x=i;
                            y=j;
                        }

                    }
                }
            }
        }
        cout<<x<<" - "<<y<<" -> "<<graph[x][y]<<endl;
        selected[y]=true;
        cnt++;
    }
    
  return 0;
}
