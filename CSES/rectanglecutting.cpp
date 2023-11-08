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


ll dp[501][501];

int main(){
    Mob;
    for(int i=1; i<=500; i++) for(int j=1; j<=500; j++) dp[i][j] = INTMAX;
    for(int i=1; i<=500; i++) dp[i][i] = 0;
    for(int i=1; i<=500; i++){
        for(int j=1; j<=500; j++){
            for(int k=1; k<i; k++){
                dp[i][j] = min(dp[i][j], dp[k][j]+dp[i-k][j]+1);
            }
            for(int k=1; k<j; k++){
                dp[i][j] = min(dp[i][j], dp[i][k]+dp[i][j-k]+1);
            }
        }
    }
    int a, b; cin >> a >> b;
    cout << dp[a][b] << el;
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/