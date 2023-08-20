#include <iostream>
#include <string>

#define Mob ios_base::sync_with_stdio(false)
#define ll long long

using namespace std;

ll v, h, n;
ll mp[505][505];
ll memo[505][505];
bool doneit[505][505];

ll fall(ll vv, ll hh)
{
	if(doneit[vv][hh]) return memo[vv][hh];
	doneit[vv][hh] = true;
	if(vv>=v or hh>h or hh<1) return 0;
	else
	{
		if(mp[vv+1][hh]==0) memo[vv][hh] = fall(vv+1, hh);
		else if(mp[vv+1][hh]==1)
		{
			ll left=hh, right=hh;
			while(left>0 and mp[vv+1][left]==1) left--;
			while(right<=h and mp[vv+1][right]==1) right++;
			memo[vv][hh] = 1 + fall(vv+1, left) + fall(vv+1, right);
		} else
		{
			return memo[vv+1][hh];
		}
	}	
	return memo[vv][hh];
}

int main()
{
	Mob;
	for(int i=0; i<505; i++)
	{
		for(int j=0; j<505; j++)
		{
			mp[i][j] = 0;
		}
	}
	cin >> v >> h >> n;
	for(int i=0; i<n; i++)
	{
		ll v1, h1, v2, h2;
		cin >> v1 >> h1 >> v2 >> h2;
		for(int j=v1; j<=v2; j++)
		{
			for(int k=h1; k<=h2; k++)
			{
				mp[j][k] = 1;
			}
		}
	}
	ll mx = 0;
	for(int i=1; i<=h; i++)
	{
		mx = max(mx, fall(0, i));
	}
	cout << mx;
	return 0;
}