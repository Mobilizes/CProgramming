#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <list>
#include <array>
#include <deque>

#define Mob ios_base::sync_with_stdio(false)
#define lcm(a, b) (a*b / __gcd(a, b))
#define INTinf 1e9
#define LLinf 1e18
#define module 1e9+7
#define fi first
#define se second

typedef long long ll;

using namespace std;

int n, k;
int coins[105], dp[1000005];
bool computed[1000005];

int solve(int x)
{
	if(x<=0) return 0;
	if(computed[x]) return dp[x];
	int best = INTinf;
	for(int i=0; i<n; i++)
	{
		if(coins[i]<=x)
		{
			best = min(best, solve(x-coins[i]) + 1);
		}
	}
	computed[x] = true;
	dp[x] = best;
	return best;
}

int main()
{
	Mob;
	cin >> n >> k;
	for(int i=0; i<n; i++)
	{
		cin >> coins[i];
	}
	int res = solve(k);
	if(res==INTinf) cout << -1;
	else cout << res;
}

// https://tlx.toki.id/courses/competitive/chapters/07/submissions/1140656