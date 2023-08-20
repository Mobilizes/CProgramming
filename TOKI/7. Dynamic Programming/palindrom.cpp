#include <bits/stdc++.h>

#define Mob ios_base::sync_with_stdio(false)
#define lcm(a, b) (a*b / __gcd(a, b))
#define inf 1e9+7
#define fi first
#define se second

typedef long long ll;

using namespace std;

int memo[55][55];

int lcs(string s, string t)
{
	int n = s.length();
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
		{
			if(s[i-1]==t[j-1])
			{
				memo[i][j] = 1 + memo[i-1][j-1];
			} else
			{
				memo[i][j] = max(memo[i-1][j], memo[i][j-1]);
			}
		}
	}
	return memo[n][n];
}

int main()
{
	Mob;
	int t; cin >> t;
	for(int k=0; k<55; k++)
	{
		memo[0][k] = 0;
		memo[k][0] = 0;
	}
	while(t--)
	{
		string s;
		cin >> s;
		string t = s;
		reverse(t.begin(), t.end());
		cout << lcs(s, t) << endl;
	}
	return 0;
}

// https://tlx.toki.id/courses/competitive/chapters/07/submissions/1145672