#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <list>

#define Mob ios_base::sync_with_stdio(false)
#define lcm(a, b) (a*b / __gcd(a, b))
#define inf 1e9+7
#define fi first
#define se second

typedef long long ll;

using namespace std;

ll n, m, res=0;
pair <ll, ll> arr[100005];

int main()
{
	Mob;
	cin >> n >> m;
	for(int i=0; i<n; i++)
	{
		cin >> arr[i].fi >> arr[i].se;
	}
	sort(arr, arr+n);
	for(int i=0; i<n; i++)
	{
		if(m/arr[i].fi < arr[i].se)
		{
			res += m / arr[i].fi;
			break;
		} else
		{
			res += arr[i].se;
			m -= arr[i].fi * arr[i].se;
		}
	}
	cout << res << endl;
}