#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
	ll p, q, r;
	cin >> p >> q >> r;
	ll n; cin >> n;
	ll lcm1 = p*q / __gcd(p, q);
	ll lcm = lcm1*r / __gcd(lcm1, r);
	for(int i=0; i<n; i++)
	{
		ll a; cin >> a;
		if(a==lcm) cout << "YA" << endl;
		else cout << "TIDAK" << endl;
	}
}

