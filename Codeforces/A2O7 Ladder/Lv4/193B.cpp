#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false); cin.tie(NULL);
#define init(arr,n,x) for(int i=0; i<n; i++) arr[i] = x;
#define lcm(a,b) (a*b / __gcd(a, b))
#define tcs() int testcase; cin >> testcase; while(testcase--)
#define INTMAX (int)(1e9)
#define LLMAX (ll)(1e18)
#define mod int(1e9+7)
#define pymod(a,b) ((b + (a%b)) % b)
#define fi first
#define se second
#define el '\n'


int n, k;
ll arr[200005];
ll dp[200005];
ll st[200005][100];

ll query(ll l, ll r){
    ll j = (ll)log2(r-l+1);
    if (st[l][j] <= st[r - (1 << j) + 1][j]) return st[l][j];
    return st[r - (1 << j) + 1][j];
}

int main(){
    Mob;
    cin >> n >> k;
    // sliding window for subarray sum
    for(int i=0; i<n; i++) cin >> arr[i];
    for(int i=0; i<k; i++) dp[0] += arr[i];
    for(int i=1; i<=n-k; i++) dp[i] = dp[i-1] - arr[i-1] + arr[k+i-1];
    for(int i=0; i<=n-k; i++) cout << dp[i] << ' ';
    cout << el;
    int m = n-k+1;
    for(int i=0; i<m; i++) st[i][0] = dp[i];
    for(int j=1; (1<<j)<=m; j++){
        for(int i=0; (i+(1 << j)-1)<n; i++){
            st[i][j] = max(st[i][j-1], st[i+(1<<(j-1))][j-1]);
        }
    }
    int l = 0;
    int mx = 0;
    for(int i=0; i<m-k; i++){
        ll q = query(i+k, m-1);
        if(dp[i]+q>mx){
            // cout << q << el;
            if(dp[l]==dp[i]) l = min(l, i);
            mx = dp[l]+q;
        }
    }
    int r=l+k;
    for(r=l+k; r<m; r++){
        if(dp[r]==mx-dp[l]) break;
    }
    cout << mx << el;
    cout << l+1 << ' ' << r+1 << el;
    // cout << dp[l] << ' ' << dp[r] << el;
    // // sqrt decomposition for max
    // ll block[1005]; for(int i=0; i<1005; i++) block[i] = 0;
    // ll sqr = ceil(sqrt(n-k+1));
    // for(int i=0; i<=n-k; i++){
    //     block[i/sqr] = max(block[i/sqr], dp[i]);
    // }
    // // for(int i=0; i<=n-k; i++){
    // //     if(block[i]==0) break;
    // //     cout << block[i] << ' ';
    // // }
    // // cout << el << el;
    // // combine those two techniques
    // ll res = 0;
    // ll resl, resr;
    // for(int l=0; l<=n-k-k; l++){
    //     ll r = l+k;
    //     ll mx = dp[r];
    //     ll idxr = r;
    //     for(;r<=n-k;){
    //         // cout << l+1 << ' ' << r+1 << ' ' << mx << el;
    //         if(r%sqr==0 && r+sqr-1<=n-k){
    //             // mx = max(mx, block[r/sqr]);
    //             if(block[r/sqr]>mx){
    //                 for(int i=sqr*(r/sqr); i<=n-k; i++){
    //                     if(dp[i]==block[r/sqr]){
    //                         idxr = i;
    //                         break;
    //                     }
    //                 }
    //                 mx = block[r/sqr];
    //             }
    //             r += sqr;
    //         } else{
    //             // mx = max(mx, dp[r]);
    //             if(dp[r]>mx){
    //                 mx = dp[r];
    //                 idxr = r;
    //             }
    //             r++;
    //         }
    //     }
    //     if(mx+dp[l]>res){
    //         // cout << "l r : " << l << ' ' << idxr << el;
    //         resl = l+1;
    //         resr = idxr+1;
    //         res = mx+dp[l];
    //     }
    //     // cout << res << el;
    // }
    // cout << resl << ' ' << resr << el;

    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/
