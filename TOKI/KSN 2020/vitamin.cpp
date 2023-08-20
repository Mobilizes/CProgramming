#include <iostream>
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>
#include <string>
#include <map>
#include <math.h>
 
typedef long long ll;

using namespace std;

int main()
{
	int n, m, h, k, d, memo[10005] = {0};
	cin >> n >> m;
	for (int i = 1; i <= n; ++i)
	{
		cin >> h >> k >> d;
		if(!d)
		{
			for (int j = h; j <= m; ++j)
			{
				memo[j] = max(memo[j], memo[j-h]+k);
			}
		} else
		{
			for(int j=m; j>=h; j--)
			{
				memo[j] = max(memo[j], memo[j-h]+k);
			}
		}
	}
	cout << memo[m] << endl;
	return 0;
}

// https://tlx.toki.id/problems/ksnp-2021/B3/submissions/1133940