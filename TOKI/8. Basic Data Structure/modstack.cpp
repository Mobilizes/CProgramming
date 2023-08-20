#include <bits/stdc++.h>
#include <vector>

#define Mob ios_base::sync_with_stdio(false)
#define lcm(a, b) (a*b / __gcd(a, b))
#define inf 1e9+7
#define fi first
#define se second

typedef long long ll;

using namespace std;

int n, x, y, sum=0;
string s;
vector<int> stk;

int main()
{
	Mob;
	cin >> n;
	for(int i=0; i<n; i++)
	{
		cin >> s;
		if(s=="add")
		{
			cin >> x >> y;
			for(int j=0; j<y; j++) stk.push_back(x - sum);
			cout << stk.size() << endl;
		} else if(s=="del")
		{
			cin >> y;
			if(stk.size())
			{
				cout << stk.back() + sum << endl;
				for(int j=0; j<y; j++) stk.pop_back();
			}
		} else if(s=="adx")
		{
			cin >> x;
			sum += x;
		} else
		{
			cin >> x;
			sum -= x;
		}
	}
	return 0;
}

// https://tlx.toki.id/courses/competitive/chapters/08/submissions/1141625