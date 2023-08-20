#include <bits/stdc++.h>
 
#define Mob ios_base::sync_with_stdio(false)
#define lcm(a, b) (a*b / __gcd(a, b))
#define INTinf 1e9
#define LLinf 1e18
#define mod 1000000007
 
typedef long long ll;
 
using namespace std;

ll power(ll a, ll b)
{
	if(b==0) return 1;
	if(b==1) return a;
	ll res = power(a, b/2);
	if(b%2==0) return (res*res) % 1000000;
	return (a*res*res) % 1000000;
}

int main()
{
	Mob;
	ll a, b;
	bool leadingzeros = false;
	cin >> a >> b;
	if(a>=1000000) leadingzeros = true;
	a %= 1000000;
	ll temp = 1;
	for(ll i=0; i<b; i++)
	{
		temp *= a;
		if(temp>=1000000)
		{
			leadingzeros = true;
			break;
		}
	}
	if(leadingzeros) cout << setfill('0') << setw(6);
	cout << power(a, b) << endl;
	return 0;
}