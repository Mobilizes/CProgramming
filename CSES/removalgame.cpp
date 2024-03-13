#include <bits/stdc++.h>
 
typedef long long ll;
 
using namespace std;
 
#define Mob ios_base::sync_with_stdio(false); cin.tie(NULL);
#define init(arr,n,x) for(int idxdx=0; idxdx<n; idxdx++) arr[idxdx] = x;
#define cinn(arr,n) for(int idxdx=0; idxdx<n; idxdx++) cin >> arr[idxdx]
#define cinm(arr,n) for(int idxdx=1; idxdx<=n; idxdx++) cin >> arr[idxdx]
#define lcm(a,b) ((a / __gcd(a, b)) * b)
#define tcs() int testcase; cin >> testcase; for(int tecs=0; tecs<testcase; tecs++)
#define el "\n"
 
 
int main(int argc, char const* argv[]){
    Mob;
    int n; cin >> n;
    vector<ll> arr(n); cinn(arr, n);
    vector<vector<ll>> dp(5001, vector<ll>(5001, 0LL)); 
    for(int i=0; i<n; i++) dp[i][i] = arr[i];
    for(int i=1; i<n; i++) dp[i-1][i] = abs(arr[i-1]-arr[i]);
    for(int i=3; i<=n; i++){
        for(int j=0; j<=n-i; j++){
            dp[j][j+i-1] = max(arr[j] - dp[j+1][j+i-1], arr[j+i-1] - dp[j][j+i-2]);
        }
    }
    cout << (accumulate(begin(arr), end(arr), 0LL) + dp[0][n-1]) / 2 << el;
    return 0;
}
 
 
/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/