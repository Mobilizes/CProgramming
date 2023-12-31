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


vector<vector<int>> dp(10005, vector<int>(10005, 0));
string a, b;


int main()
{
    Mob;
    cin >> a >> b;
    int n = int(a.size());
    int m = int(b.size());
    for(int i=0; i<=n; i++){
        for(int j=0; j<=m; j++){
            if(i==0) dp[i][j] = j;
            else if(j==0) dp[i][j] = i;
            else if(a[i-1]==b[j-1]) dp[i][j] = dp[i-1][j-1];
            else dp[i][j] = 1 + min({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]});
        }
    }
    cout << dp[n][m] << el;
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/