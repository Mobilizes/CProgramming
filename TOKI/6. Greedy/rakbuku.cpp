#include <iostream>
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>
#include <string>
#include <map>
#include <list>
#include <math.h>

#define fpb(a, b) (a*b / __gcd(a, b))
#define inf 1e9+7

typedef long long ll;

using namespace std;

int n, q;
int arr[20005];

int main()
{
	cin >> n >> q;
	for(int i=0; i<n; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr+n, greater<>());
	int x = 0;
	for(int i=0; i<n; i++)
	{
		x += arr[i];
		if(x>=q)
		{
			cout << i+1;
			return 0;
		}
	}
	return 0;
}