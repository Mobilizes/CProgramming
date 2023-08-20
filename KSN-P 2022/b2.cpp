#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
	int k, j=0; cin >> k;
	pair<ll, ll> kdg[k+2];
	for(int i=0; i<k; i++)
	{
		cin >> kdg[i].second;
	}
	for(int i=0; i<k; i++)
	{
		cin >> kdg[i].first;
	}
	sort(kdg, kdg+k);
	int n; cin >> n;
	ll arr[n];
	for(int i=0; i<n; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr+n, greater<>());
	ll sum = 0;
	for(int i=0; i<n; i++)
	{
		sum += arr[i] * kdg[j].first;
		kdg[j].second--;
		if(kdg[j].second==0) j++;
	}
	cout << sum << endl;
}

