#include <bits/stdc++.h>

#define Mob ios_base::sync_with_stdio(false)
#define lcm(a, b) (a*b / __gcd(a, b))
#define INTinf 1e9
#define LLinf 1e18
#define mod 1000000007

typedef long long ll;

using namespace std;

int n, s, p;
int arr[1000005];
int mx[15];
vector<int> adj[1000005];
string labels[15];
int l;

void dfs(int m, int sum)
{	
	sum += arr[m];
	mx[l] = max(mx[l], sum);
	for(int i : adj[m])
		dfs(i, sum);
}

int main()
{
	Mob;
	cin >> n >> s >> p;
	for(int i=1; i<=n; i++)
		cin >> arr[i];
	map<string, int> mp;
	vector<pair<int, int>> virus;
	int idx=1;
	for(int i=1; i<=n; i++)
	{
		int val;
		if(i<=p)
		{
			string s;
			cin >> s >> val;
			if(mp[s]) 
				virus.push_back({val, mp[s]});
			else
			{
				mp[s] = idx;
				labels[idx] = s;
				idx++;
				virus.push_back({val, mp[s]});
			}
		} else
		{
			int q; cin >> q >> val;
			adj[q].push_back(val);
		}
	}

	for(auto i : virus)
	{
		l = i.second;
		dfs(i.first, 0);
	}
	int res = 0;
	string resvirus;
	for(int i=1; i<=s; i++)
	{
		if(mx[i]>res)
		{
			res = mx[i];
			resvirus = labels[i];
		}
	}
	cout << resvirus << endl << res;
	return 0;
}