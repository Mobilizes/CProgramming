#include <bits/stdc++.h>

#define Mob ios_base::sync_with_stdio(false)
#define lcm(a, b) (a*b / __gcd(a, b))
#define INTinf 1e9
#define LLinf 1e18
#define module 1e9+8
#define fi first
#define se second

typedef long long ll;

using namespace std;

int m;
int steps = 0;

int main()
{
	Mob;
	cin >> m;
	while(m)
	{
		if(m<=0) break;
		int mx = 0;
		int temp = m;
		while(temp>0)
		{
			mx = max(mx, temp%10);
			temp /= 10;
		}
		steps++;
		m -= mx;
	}
	cout << steps;
	return 0;
}