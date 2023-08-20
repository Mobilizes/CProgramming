#include <bits/stdc++.h>
 
#define Mob ios_base::sync_with_stdio(false)
#define lcm(a, b) (a*b / __gcd(a, b))
#define INTinf 1e9
#define LLinf 1e18
#define mod 1000000007
 
typedef long long ll;
 
using namespace std;
 
bool isprime(int x)
{
	if(x<2) return false;
	if(x==2) return true;
	if(!(x%2)) return false;
	for(int i=3; (i*i)<=x; i+=2)
		if(!(x%i)) return false;
	return true;
}
 
int main()
{
	Mob;
	int n; cin >> n;
	ll arr[n+1];
	for(int i=0; i<n; i++) cin >> arr[i];
	for(int i=0; i<n; i++)
	{
		ll x = sqrt(arr[i]);
		if(x*x==arr[i] and isprime(x)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}

//https://codeforces.com/problemset/problem/230/B