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
	int n, q; cin >> n >> q;
	pair<string, string> arr[n+1];
	map<string, string> mp;
	for(int i=0; i<n; i++)
	{
		cin >> arr[i].first >> arr[i].second;
		mp[arr[i].first] = arr[i].second;
	}
	for(int i=0; i<q; i++)
	{
		string s; cin >> s;
		if(mp[s]=="") cout << "NIHIL" << endl;
		else cout << mp[s] << endl;
	}
	return 0;
}