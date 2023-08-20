#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <list>
#include <array>
#include <deque>

#define Mob ios_base::sync_with_stdio(false)
#define lcm(a, b) (a*b / __gcd(a, b))
#define inf 1e9+7
#define fi first
#define se second

typedef long long ll;

using namespace std;

int n, x, y;
vector<int> que;
string s;

int main()
{
	Mob;
	int popped = 0;
	cin >> n;
	for(int i=0; i<n; i++)
	{
		cin >> s;
		if(s=="add")
		{
			cin >> x >> y;
			for(int j=0; j<y; j++) que.push_back(x);
			cout << que.size() - popped << endl;
		} else if(s=="del")
		{
			cin >> y;
			cout << que[popped] << endl;
			popped += y;
		} else if(s=="rev")
		{
			reverse(que.begin()+popped, que.end());
		}
	}
	return 0;
}

// https://tlx.toki.id/courses/competitive/chapters/08/submissions/1141247