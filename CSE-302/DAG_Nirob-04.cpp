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
bool visited[index];
map<int, list<int> > graph;
stack<int > _Stack;
int distan[index];
int previous[index];

void recursionTopologicalSort(int vertex,bool visited[],stack<int>& _Stck)
{
    visited[vertex]=true;
    list<int >:: iterator i;
    for(i=graph[vertex].begin();i!=graph[vertex].end();i++)
    {
        if(!visited[*i])
        recursionTopologicalSort(*i,visited,_Stck);
    }

    _Stck.push(vertex);

}

void topologicalsort(){

    memset(visited,false,sizeof(visited));

    for(int i=0;i<node;i++)
    {
        if(!visited[i])
        recursionTopologicalSort(i,visited,_Stack);
    }

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
    topologicalsort();
    cout<<"Topological sorting for DAG is: ";
    while(!_Stack.empty())
    {
        cout<<_Stack.top()<<" ";
        _Stack.pop();
    }
    cout<<nl;
  return 0;
}