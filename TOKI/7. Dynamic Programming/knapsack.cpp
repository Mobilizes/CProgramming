#include <bits/stdc++.h>

#define Mob ios_base::sync_with_stdio(false)
#define lcm(a, b) (a*b / __gcd(a, b))
#define inf 1e9+7
#define fi first
#define se second

typedef long long ll;

using namespace std;

int m, k;
int dp[2005], w[2005], v[2005];

int solve(int n, int c)
{
	if(dp[n]!=-1) return dp[n];
	if(n==0 or c==0) return 0;
	else if(w[n]>c) return solve(n-1, c);
	dp[n] = max(solve(n-1, c), v[n] + solve(n-1, c-w[n]));
	return dp[n];
}

int main()
{
	Mob;
	for(int i=0; i<2005; i++)
		dp[i] = -1;
	cin >> m >> k;
	for(int i=0; i<k; i++) cin >> w[i] >> v[i];
	cout << solve(k-1, m) << endl;
}