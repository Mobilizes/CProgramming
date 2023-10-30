#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false); cin.tie(NULL);
#define lcm(a, b) (a*b / __gcd(a, b))
#define tcs() int testcase; cin >> testcase; while(testcase--)
#define INTMAX (int)(1e9)
#define LLMAX (ll)(1e18)
#define mod int(1e9+7)
#define pymod(a,b) ((b + (a%b)) % b)
#define fi first
#define se second
#define el '\n'


int n, m, x, y;
int white[1005];
int black[1005];
int dp[2][1005];

int main(){
    Mob;
    cin >> n >> m >> x >> y;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            char c; cin >> c;
            if(c=='.') white[j]++;
            else black[j]++;
        }
    }
    for(int i=2; i<=m; i++){
        white[i] += white[i-1];
        black[i] += black[i-1];
    }
    dp[0][0] = 0;
    dp[1][0] = 0;
    for(int i=1; i<=m; i++){
        dp[0][i] = INTMAX;
        for(int a=x; a<=y; a++) dp[0][i] = min(dp[0][i], dp[0][i-a] + white[i] - white[i-a]);
        dp[1][i] = INTMAX;
        for(int a=x; a<=y; a++) dp[1][i] = min(dp[1][i], dp[1][i-a] + black[i] - black[i-a]);
    }
    for(int i=0; i<2; i++){
        for(int j=0; j<=m; j++) cout << dp[i][j] << ' ';
        cout << el;
    }
    cout << min(dp[0][m], dp[1][m]) << el;
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/