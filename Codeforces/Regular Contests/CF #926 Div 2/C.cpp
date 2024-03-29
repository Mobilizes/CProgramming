#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false); cin.tie(NULL);
#define init(arr,n,x) for(int idxdx=0; idxdx<n; idxdx++) arr[idxdx] = x;
#define lcm(a,b) (a*b / __gcd(a, b))
#define tcs() int testcase; cin >> testcase; for(int tecs=0; tecs<testcase; tecs++)
#define el "\n"

void solve(){
    ll k, x, a; cin >> k >> x >> a;
    ll t = 0;
    bool flag = true;
    for(ll i=0; i<x; i++){
        ll ti = t/(k-1) + 1;
        t += ti;
        if(t>a){
            flag = false;
            break;
        }
    }
    if(flag && (a-t)*k > a) cout << "YES" << el;
    else cout << "NO" << el;
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