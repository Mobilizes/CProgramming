#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
	int n, p, q;
	cin >> n >> p >> q;
	int arr[n+2];
	map<int, int> mp;
	for(int i=1; i<=n; i++)
	{
		cin >> arr[i];
		mp[i] = arr[i];
	}
	sort(arr+1, arr+n+1);
	for(int i=1; i<=q; i++)
	{
		int a; cin >> a;
		a = mp[a];
		int low = 1;
		int high = n;
		int mid = (low+high)/2;
		while(low<=high)
		{
			mid = (low+high)/2;
			if(arr[mid]==a)
			{
				break;
			} else if(a>arr[mid])
			{
				low = mid + 1;
			} else
			{
				high = mid - 1;
			}
		}
		int ind = mid;
		int sum = 0;
		while(ind>0)
		{
			if(arr[mid]-arr[ind]>p)
			{
				break;
			} else
			{
				sum++;
				ind--;
			}	
		}
		cout << sum << endl;
	}
}