// Problem: D. Three Activities
// Contest: Codeforces - Codeforces Round 916 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1914/D
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

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
		int n; cin >> n;
		vector<pair<int, int>> a(n), b(n), c(n);
		for(int i=0; i<n; i++) cin >> a[i].first, a[i].second = i;
		for(int i=0; i<n; i++) cin >> b[i].first, b[i].second = i;
		for(int i=0; i<n; i++) cin >> c[i].first, c[i].second = i;
		sort(a.begin(), a.end());
		sort(b.begin(), b.end());
		sort(c.begin(), c.end());
		int mx = 0;
		for(int i=n-1; i>n-4; i--){
			for(int j=n-1; j>n-4; j--){
				for(int k=n-1; k>n-4; k--){
					if(a[i].second!=b[j].second && a[i].second!=c[k].second && b[j].second!=c[k].second) 
						mx = max(a[i].first+b[j].first+c[k].first, mx);
				}
			}
		}
		cout << mx << el;
	}
	return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/