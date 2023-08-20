#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <list>
#include <math.h>

#define Mob ios_base::sync_with_stdio(false)
#define lcm(a, b) (a*b / __gcd(a, b))
#define inf 1e9+7

typedef long long ll;

using namespace std;

ll n;
pair<ll, ll> arr[100005];

bool compare(pair<int, int> a, pair<int, int> b)
{
	return a.second < b.second;
}

int main()
{
	Mob;
	cin >> n;
	for(ll i=0; i<n; i++)
	{
		cin >> arr[i].first >> arr[i].second;
		arr[i].second += arr[i].first;
	}
	if(n==1)
	{
		cout << 1;
		return 0;
	}
	sort(arr, arr+n, compare);
	ll res = 1;
	for(ll i=1, j=0; i<n; i++)
	{
		if(arr[i].first >= arr[j].second)
		{
			res++;
			j = i;
		}
	}
	cout << res;
}