#include <bits/stdc++.h>
 
#define Mob ios_base::sync_with_stdio(false)
#define lcm(a, b) (a*b / __gcd(a, b))
#define INTinf 1e9
#define LLinf 1e18
#define mod 1000000007
 
typedef long long ll;
 
using namespace std;
 
int main()
{
	Mob;
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		string s; cin >> s;
		int res=0;
		map<char, int> mp;
		for(int i=0; i<n; i++)
		{
			if(mp[s[i]]==0)
			{
				res += 2;
				mp[s[i]]++;
			} else
			{
				res++;
			}
		}
		cout << res << endl;
	}
	return 0;
}