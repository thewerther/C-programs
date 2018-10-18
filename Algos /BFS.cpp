#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define ss second
#define ff first
#define ep 1e-6
#define nep -1e-6
#define MOD 1000000007
using namespace std;
int visited[100];
queue<int>q;
vector<int>adj[100];
set<int>vertices;
void bfs()
{
	while(!q.empty())
	{
		int temp=q.front();
		cout << temp << " ";
		q.pop();
		visited[temp]=1;
		for(int i=0;i<adj[temp].size();i++)
		{
			if(visited[adj[temp][i]]==-1)
			{
				q.push(adj[temp][i]);
				visited[adj[temp][i]]=0;
			}
		}
	}	
}
int main()
{
	ll n;
	cin >> n;
	for(int i =0;i<n;i++)
	{
		visited[i]=-1;
	}
	int edges;
	cin >> edges;
	for(int i=0;i<edges;i++)
	{
		ll u,v;
		cin >> u >> v;
		adj[u].pb(v);
		vertices.insert(u);
		vertices.insert(v);
	}
	set<int> :: iterator itr;
	q.push(1);
	visited[1]=0;
	for(itr=vertices.begin();itr!=vertices.end();itr++)
	{
		if(visited[*itr]==-1)
		{
			//cout << *itr <<"hi" << endl;
			bfs();
		}
	}
}
