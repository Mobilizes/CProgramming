#include <bits/stdc++.h>

#define Mob ios_base::sync_with_stdio(false)
#define lcm(a, b) (a*b / __gcd(a, b))
#define INTinf 1000000000
#define LLinf 1000000000000000000
#define module 1000000007
#define fi first
#define se second

typedef long long ll;

using namespace std;

int n, x;
int coins[105];
int dp[1000005];

int main()
{
	Mob;
	cin >> n >> x;
	for(int i=0; i<n; i++) cin >> coins[i];
	dp[0] = 1;
	for(int i=1; i<=x; i++)
	{
		dp[i] = 0;
		for(int j=0; j<n; j++)
		{
			if(coins[j]<=i) dp[i] = (dp[i] + dp[i-coins[j]]) % module;
		}
	}
	cout << dp[x];
	return 0;
}