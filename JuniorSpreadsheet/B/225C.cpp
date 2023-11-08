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
    dp[0][0] = 0;
    for(int i=1; i<=m; i++){
        dp[0][i] = 1e9;
        dp[1][i] = 1e9;
        for(int j=x; j<=y; j++){
            if(i-j>=0){
                dp[1][i] = min(dp[1][i], dp[0][i-j] + white[i] - white[i-j]);
                dp[0][i] = min(dp[0][i], dp[1][i-j] + black[i] - black[i-j]);
            }
        }
    }
    cout << min(dp[0][m], dp[1][m]) << el;
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/

/*
0 2 3 5 9 13 
0 4 9 13 15 17 
0+2-0=2
0+4-0=4
0 2 0 0 0 0 
0 4 0 0 0 0 
4+3-2=5
2+9-4=7
0+3-0=3
0+9-0=9
0 2 3 0 0 0 
0 4 7 0 0 0 
7+5-3=9
3+13-9=7
4+5-2=7
2+13-4=11
0 2 3 7 0 0 
0 4 7 7 0 0 
7+9-5=11
7+15-13=9
7+9-3=13
3+15-9=9
0 2 3 7 11 0 
0 4 7 7 9 0 
9+13-9=13
11+17-15=13
7+13-5=15
7+17-13=11
0 2 3 7 11 13 
0 4 7 7 9 11 
11
*/