#include <bits/stdc++.h>
 
#define Mob ios_base::sync_with_stdio(false)
#define lcm(a, b) (a*b / __gcd(a, b))
#define INTinf 1e9
#define LLinf 1e18
#define mod 1000000007
 
typedef long long ll;
 
using namespace std;

ll a, b, c, n;

ll power(ll a, ll b)
{
	if(b==0) return 1;
	if(b==1) return a;
	ll x = power(a, b/2);
	if(b%2==0)
	{
		return x*x%n;
	} else
	{
		return (((a*x)%n)*x)%n;
	}
} 

int main()
{
	Mob;
	cin >> a >> b >> c >> n;
	ll res = a;
	for(ll i=0; i<c; i++)
	{
		res %= n;
		res = power(res, b);
	}
	cout << (res+1) % n << endl;
	return 0;
}