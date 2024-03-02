#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false); cin.tie(NULL);
#define init(arr,n,x) for(int idxdx=0; idxdx<n; idxdx++) arr[idxdx] = x;
#define lcm(a,b) (a*b / __gcd(a, b))
#define tcs() int testcase; cin >> testcase; for(int tecs=0; tecs<testcase; tecs++)
#define el "\n"

ll pow1(ll x, ll y){
    ll res = 1;
    for(int i=0; i<y; i++) res *= x;
    return res;
}

void solve(){
    ll a, b, l; cin >> a >> b >> l;
    if(a>b) swap(a, b);
    ll x = 0, y = 0;
    map<int, bool> mp;
    int res = 0;
    for(int i=0; i<=20; i++){
        ll powb = pow1(b, i);
        if(powb>l) break;
        for(int j=0; j<=20; j++){
            ll powa = pow1(a, j);
            if(powa*powb > l) break;
            int k = l / (powa * powb);
            if(k*powa*powb == l && !mp[k]){
                res++;
                mp[k] = true;
            }
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