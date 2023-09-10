#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false)
#define lcm(a, b) (a*b / __gcd(a, b))
#define tcs() int testcase; cin >> testcase; while(testcase--)
#define INTMAX (int)(1e9)
#define LLMAX (ll)(1e18)
#define mod int(1e9+7)
#define pymod(a,b) ((b + (a%b)) % b)
#define fi first
#define se second
#define el '\n'


vector<vector<int>> dp(10005, vector<int>(10005, -1));
string a, b;

int lcs(int n, int m){
    if(n==0 or m==0) return 0;
    if(dp[n][m]!=-1) return dp[n][m];
    if(a[n-1] == b[m-1]) return dp[n][m] = 1 + lcs(n-1, m-1);
    return dp[n][m] = max(lcs(n-1, m), lcs(n, m-1));
}

int main()
{
    Mob;
    cin >> a >> b;
    int n = int(a.size());
    int m = int(b.size());
    int res = lcs(n, m);
    cout << n-res + m-res << el;
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/