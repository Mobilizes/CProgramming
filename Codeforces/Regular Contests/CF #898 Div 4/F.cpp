#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false); cin.tie(NULL);
#define init(arr,n,x) for(int idxdx=0; idxdx<n; idxdx++) arr[idxdx] = x;
#define lcm(a,b) (a*b / __gcd(a, b))
#define tcs() int testcase; cin >> testcase; for(int tecs=0; tecs<testcase; tecs++)
#define el "\n"

void solve(){
    int n, k; cin >> n >> k;
    int a[n+1]; for(int i=1; i<=n; i++) cin >> a[i];
    int h[n+1]; for(int i=1; i<=n; i++) cin >> h[i];
    for(int i=1; i<=n-1; i++) h[i] = (h[i]%h[i+1]==0) ? 1 : 0;
    // for(int i=1; i<=n; i++) cout << a[i] << ' ';
    // cout << el;
    // for(int i=1; i<n; i++) cout << h[i] << ' ';
    // cout << 0;
    // cout << el;
    // cout << el;
    int curr = 0;
    int res = 0;
    int l=1;
    for(int r=1; r<=n; r++){
        curr += a[r];
        while(curr>k) curr -= a[l++];
        // cout << curr << ' ' << l << ' ' << r << el;
        res = max(res, r-l+1);
        if(h[r]==0){
            l = r+1;
            curr = 0;
        }
    }
    cout << res << el;
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