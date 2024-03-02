#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false); cin.tie(NULL);
#define init(arr,n,x) for(int idxdx=0; idxdx<n; idxdx++) arr[idxdx] = x;
#define lcm(a,b) (a*b / __gcd(a, b))
#define tcs() int testcase; cin >> testcase; for(int tecs=0; tecs<testcase; tecs++)
#define el "\n"

void solve(){
    int n, q; cin >> n >> q;
    ll arr[n+5]; init(arr,n+5,0LL);
    int cnt[n+5]; init(cnt,n+5,0);
    for(int i=1; i<=n; i++) cin >> arr[i];
    for(int i=1; i<=n; i++) cnt[i] = cnt[i-1] + (arr[i]==1);
    for(int i=2; i<=n; i++) arr[i] += arr[i-1];
    while(q--){
        int l, r; cin >> l >> r;
        int len = r - l + 1;
        ll sum = arr[r] - arr[l-1];
        int currone = cnt[r] - cnt[l-1];
        if(len + currone <= sum && len > 1) cout << "YES" << el;
        else cout << "NO" << el;
    }
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