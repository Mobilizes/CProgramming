#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false); cin.tie(NULL);
#define init(arr,n,x) for(int idxdx=0; idxdx<n; idxdx++) arr[idxdx] = x;
#define lcm(a,b) (a*b / __gcd(a, b))
#define tcs() int testcase; cin >> testcase; for(int tecs=0; tecs<testcase; tecs++)
#define el "\n"

void solve(){
    ll n; cin >> n;
    ll arr[n+5]; for(int i=0; i<n; i++) cin >> arr[i];
    ll res = -1;
    for(int f=1; f<=n; f++){
        if(n%f==0){
            ll mx = -1e18, mn = 1e18;
            for(int i=0; i<n; i+=f){
                ll curr = 0;
                for(int j=i; j<i+f; j++) curr += arr[j];
                mx = max(mx, curr);
                mn = min(mn, curr);
            }
            res = max(res, mx - mn);
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