#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false); cin.tie(NULL);
#define init(arr,n,x) for(int idxdx=0; idxdx<n; idxdx++) arr[idxdx] = x;
#define lcm(a,b) (a*b / __gcd(a, b))
#define tcs() int testcase; cin >> testcase; for(int tecs=0; tecs<testcase; tecs++)
#define el "\n"

void solve(){
    ll n, m; cin >> n >> m;
    vector<ll> arr(n); for(int i=0; i<n; i++) cin >> arr[i];
    string s; cin >> s;
    vector<ll> idx(n);
    for(int i=0, l=0, r=n-1; i<n; i++){
        if(s[i]=='L') idx[i] = l++;
        else idx[i] = r--;
    }
    reverse(idx.begin(), idx.end());
    ll product = 1;
    vector<ll> res(n);
    for(int i=0; i<n; i++){
        product *= arr[idx[i]];
        cout << product << ' ' << arr[idx[i]] << el;
        product %= m;
        res[i] = product;
    }
    for(int i=n-1; i>=0; i--) cout << res[i] << ' ';
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