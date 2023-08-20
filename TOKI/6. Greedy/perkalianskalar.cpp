#include <bits/stdc++.h>

#define lcm(a, b) (a*b / __gcd(a, b))
#define inf 1e9+7

typedef long long ll;

using namespace std;

ll n, res=0;
ll a[10005], b[10005];

int main()
{
	cin >> n;
	for(int i=0; i<n; i++)
	{
		cin >> a[i];
	}
	for(int i=0; i<n; i++)
	{
		cin >> b[i];
	}
	sort(a, a+n, greater<>());
	sort(b, b+n);
	for(int i=0; i<n; i++)
	{
		res += a[i] * b[i];
	}
	cout << res;
	return 0;
}