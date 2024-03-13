#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false); cin.tie(NULL);
#define init(arr,n,x) for(int idxdx=0; idxdx<n; idxdx++) arr[idxdx] = x;
#define lcm(a,b) (a*b / __gcd(a, b))
#define tcs() int testcase; cin >> testcase; for(int tecs=0; tecs<testcase; tecs++)
#define el "\n"


int main(){
    Mob;
    int n, m; cin >> n >> m;
    int arr[n]; for(int i=1; i<=n; i++) cin >> arr[i];
    vector<vector<ll>> dp(m+1, vector<ll>(n+1, 0));
    ll mod = 1000000007;
    for(int i=1; i<=n; i++){
        if(arr[i]==0){
            for(int j=1; j<=m; j++){
                int up = max(j-1, 1);
                int lo = min(j+1, m);
                for(int k=lo; k>=up; k--){
                    dp[j][i] += dp[k][i-1];
                    dp[j][i] %= mod;
                }
                if(i==1) dp[j][i] = 1;
            }
        } else{
            int up = max(arr[i]-1, 1);
            int lo = min(arr[i]+1, m);
            for(int k=lo; k>=up; k--){
                dp[arr[i]][i] += dp[k][i-1];
                dp[arr[i]][i] %= mod;
            }
            // dp[arr[i]][i] = max(dp[arr[i]][i], 1LL);
            if(i==1) dp[arr[i]][i] = 1;
        }
    }
    // for(int i=1; i<=m; i++){
    //     for(int j=1; j<=n; j++){
    //         cout << dp[i][j] << ' ';
    //     }
    //     cout << el;
    // }
    ll res = 0;
    for(int i=1; i<=m; i++){
        res += dp[i][n];
        res %= mod;
    }
    cout << res << el;
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/