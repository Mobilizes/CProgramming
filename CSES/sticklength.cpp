#include <bits/stdc++.h>
 
#define Mob ios_base::sync_with_stdio(false)
#define lcm(a, b) (a*b / __gcd(a, b))
#define INTinf 1e9
#define LLinf 1e18
#define mod 1000000007
 
typedef long long ll;
typedef unsigned long long ull;
 
using namespace std;

int main()
{
	Mob;
	int n; cin >> n;
	ll arr[n+1];
	ll sum = 0;
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	sort(arr, arr+n);
	ll Q2;
	if(n%2==1){
		Q2 = arr[n/2];
	} else{
		Q2 = (arr[n/2-1]+arr[n/2])/2;
	}
	for(int i=0; i<n; i++){
		sum += abs(arr[i]-Q2);
	}
	cout << sum << endl;
	return 0;
}