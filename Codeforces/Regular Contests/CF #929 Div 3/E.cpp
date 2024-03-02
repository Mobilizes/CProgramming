#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false); cin.tie(NULL);
#define init(arr,n,x) for(int idxdx=0; idxdx<n; idxdx++) arr[idxdx] = x;
#define lcm(a,b) (a*b / __gcd(a, b))
#define tcs() int testcase; cin >> testcase; for(int tecs=0; tecs<testcase; tecs++)
#define el "\n"

void solve(){
    int n; cin >> n;
    vector<ll> arr(n+2, 0); for(int i=1; i<=n; i++) cin >> arr[i];
    for(int i=1; i<=n; i++) arr[i] += arr[i-1];
    int q; cin >> q;
    while(q--){
        ll l, u; cin >> l >> u;
        ll tl = l, r = n;
        l--;
        ll ans = tl;
        while(tl<=r){
            ll m = tl+(r-tl)/2;
            if(u + arr[l] >= arr[m]){
                ans = m;
                tl = m+1;
            } else r = m-1;
        }
        while(abs(arr[ans+1] - arr[l] - u) <= abs(arr[ans] - arr[l] - u)){
            if(ans==n) break;
            ans++;
        }
        cout << ans << ' ';
    }
    cout << el;
}

int main(int argc, char const* argv[]){
    Mob;
    tcs() solve();
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/