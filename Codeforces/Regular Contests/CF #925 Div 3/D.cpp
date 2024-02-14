#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false); cin.tie(NULL);
#define init(arr,n,x) for(int i=0; i<n; i++) arr[i] = x;
#define lcm(a,b) (a*b / __gcd(a, b))
#define tcs() int testcase; cin >> testcase; for(int tecs=0; tecs<testcase; tecs++)
#define el '\n'


int main(int argc, char const* argv[]){
	Mob;
	tcs(){
		int n, x, y; cin >> n >> x >> y;
		vector<int> vec(n); for(int i=0; i<n; i++) cin >> vec[i];
		map<pair<int, int>, int> mp;
		ll ans = 0;
		for(int i=0; i<n; i++){
			ans += mp[{(x - vec[i] % x) % x, vec[i] % y}];
			mp[{vec[i] % x, vec[i] % y}]++;
		}
		cout << ans << el;
	}
	return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/