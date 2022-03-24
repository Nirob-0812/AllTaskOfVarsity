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
#define getfor(i,n) for(ll i=0;i<n;i++) 
#define sort_array sort(vi.begin(),vi.end());
#define index 100

int node,edge,u,v,source;
map<int, bool> visited;
map<int, list<int> > graph;
int distan[index];
int previous[index];
void dfs(int sourceNode)
{
    visited[sourceNode]=true;
    cout<<sourceNode<<" ";
    int vertex=sourceNode;

   list<int>::iterator i;
    for (i = graph[sourceNode].begin(); i != graph[sourceNode].end(); ++i)
        if (!visited[*i])
            dfs(*i);
}
Nirob
{
    cout<<"Enter number of Node & Edge: ";
    cin>>node>>edge; 
    cout<<"Enter Adjacent [u][v]: "<<endl;
    getfor(i,edge)
    {
        cin>>u>>v;
        graph[u].pb(v);
    }
    cout<<"Enter Source Node: ";
    cin>>source;
    cout<<"DFS Path: ";
    dfs(source);
  return 0;
}