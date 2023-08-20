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
	int ticket = INTinf;
	int diff = INTinf;
	int n; cin >> n;
	int x; cin >> x;
	int arr[n+1];
	for(int i=0; i<n; i++) 
	{
		cin >> arr[i];
		diff = min(diff, abs(x-arr[i]));
	}
	for(int i=0; i<n; i++)
	{
		if(abs(x-arr[i])<=diff)
		{
			ticket = min(ticket, arr[i]);
		}
	}
	cout << ticket << endl;
	return 0;
}