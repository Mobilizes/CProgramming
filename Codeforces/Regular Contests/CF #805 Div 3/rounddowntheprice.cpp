#include <bits/stdc++.h>

#define Mob ios_base::sync_with_stdio(false)
#define lcm(a, b) (a*b / __gcd(a, b))
#define inf 1e9+7
#define fi first
#define se second

typedef long long ll;

using namespace std;

ll power(ll n, ll x)
{
	ll res = 1;
	for(int i=1; i<x; i++)
	{
		res *= n;
	}
	return res;
}

int main()
{
	Mob;
	int t; cin >> t;
	while(t--)
	{
		ll n; cin >> n;
		for(int i=1; i<=11; i++)
		{
			ll tens = power(10, i);
			if(tens>n)
			{
				cout << n - power(10, i-1) << endl;
				break;
			}
		}
	}
	return 0;
}

// https://codeforces.com/contest/1702/problem/A