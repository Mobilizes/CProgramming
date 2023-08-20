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
		string str; cin >> str;
		bool y = false;
		bool e = false;
		bool s = false;
		if(str[0]=='y' or str[0]=='Y') y = true;
		if(str[1]=='e' or str[1]=='E') e = true;
		if(str[2]=='s' or str[2]=='S') s = true;
		if(y and e and s) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}