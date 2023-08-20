#include <bits/stdc++.h>

#define Mob ios_base::sync_with_stdio(false)
#define lcm(a, b) (a*b / __gcd(a, b))
#define INTinf 1e9
#define LLinf 1e18
#define mod 1000000007

typedef long long ll;

using namespace std;

int n, x;
int h[1002], s[1002], dp[100002];

int main()
{
	Mob;
	cin >> n >> x;
	for(int i=0; i<n; i++) cin >> h[i];
	for(int i=0; i<n; i++) cin >> s[i];
	for(int i=0; i<n; i++)
	{
		for(int j=x; j>=h[i]; j--)
		{
			dp[j] = max(dp[j], dp[j-h[i]]+s[i]);
		}
	}
	cout << dp[x] << endl;
	return 0;
}