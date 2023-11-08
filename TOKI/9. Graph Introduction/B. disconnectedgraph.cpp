#include <bits/stdc++.h>
#include <string>

#define Mob ios_base::sync_with_stdio(false)
#define ll long long

using namespace std;

ll n, e, q, r, sum;
vector<ll> adj[50005];
bool visited[50005], nodes[50005], edges[200005];

void dfs(int x)
{
	if(visited[x]) return;
	if(nodes[x]) sum++;
	visited[x] = true;
	for(int i=0; i<adj[x].size(); i++)
	{
		dfs(adj[x][i]);
	}
}

int main()
{
	Mob;
	int t; cin >> t;
	while(t--)
	{
		cin >> n >> e >> q >> r;
		int a[e+5], b[e+5];
		for(int i=0; i<50005; i++) 
		{
			adj[i].clear();
			visited[i] = false;
			nodes[i] = false;
		}
		for(int i=0; i<200005; i++) edges[i] = true;
		for(int i=1; i<=e; i++) cin >> a[i] >> b[i];
		for(int i=1; i<=q; i++)
		{
			int temp; cin >> temp;
			nodes[temp] = true;
		}
		for(int i=0; i<200005; i++) edges[i] = true;
		for(int i=1; i<=r; i++)
		{
			int temp; cin >> temp;
			edges[temp] = false;
		}
		for(int i=1; i<=e; i++)
		{
			if(edges[i])
			{
				adj[a[i]].push_back(b[i]);
				adj[b[i]].push_back(a[i]);
			}
		}
		ll ans = (q*(q-1)) / 2;
		for(int i=1; i<=n; i++)
		{
			sum = 0;
			dfs(i);
			ans -= (sum*(sum-1))/2;
		}
		cout << ans << endl;
	}
	return 0;
}