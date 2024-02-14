// Problem: B. XOR Palindromes
// Contest: Codeforces - Codeforces Round 897 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1867/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
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
		string s; cin >> s;
		string res = ""; for(int i=0; i<=n/2; i++) res += '0';
		int diff = 0;
		for(int i=0, j=n-1; j>=n/2; i++, j--) if(s[i]!=s[j]) diff++;
		for(int i=diff; i<=n/2; i+=2) res[i] = '1';
		for(int i=diff+1; i<=n/2; i+=2) if(n&1) res[i] = res[i-1];
		for(int i=res.length() - 1 - !(n&1); i>=0; i--) res += res[i];
		cout << res << el;
	}
	return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/