#include <bits/stdc++.h>

#define Mob ios_base::sync_with_stdio(false)
#define lcm(a, b) (a*b / __gcd(a, b))
#define inf 1e9+7
#define fi first
#define se second

typedef long long ll;

using namespace std;

int main()
{
	Mob;
	int t; cin >> t;
	while(t--)
	{
		string s; cin >> s;
		map<char, bool> mp;
		int remembered = 0;
		int days = 0;
		for(int i=0; i<s.length(); i++)
		{
			if(!mp[s[i]])
			{
				remembered++;
				mp[s[i]] = true;
			}
			if(!(remembered%3) and !(mp[s[i+1]]))
			{
				days++;
				mp.clear();
			}
		}
		if(remembered-3*days) days++;
		if(remembered<=3) days = 1;
		cout << days << endl;
	}
	return 0;
}