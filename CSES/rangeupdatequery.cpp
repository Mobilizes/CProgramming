#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false); cin.tie(NULL);
#define init(arr,n,x) for(int i=0; i<n; i++) arr[i] = x;
#define lcm(a,b) (a*b / __gcd(a, b))
#define tcs() int testcase; cin >> testcase; for(int tecs=0; tecs<testcase; tecs++)
#define el '\n'

vector<ll> arr, t;

void update(int node, int l, int r, int val, int a, int b){
    if(r<a || b<l) return;
    t[node] += val;
    if(l==r) return;
    int m = (l+r)/2;
    update(2*node, l, m, val, a, b);
    update(2*node+1, m+1, r, val, a, b);
    // t[node] = (t[2*node] + t[2*node+1]);
}

ll query(int node, int idx, int l, int r){
    if(l==r) return arr[idx] + t[node];
    int m = (l+r)/2;
    if(l<=idx && idx<=m) return query(2*node, idx, l, m);
    else return query(2*node+1, idx, m+1, r);
}

int main(int argc, char const* argv[]){
    Mob;
    ll n, q; cin >> n >> q;
    arr.resize(n);
    t.resize(4*n);
    for(int i=0; i<n; i++) cin >> arr[i];
    init(t,4*n,0);
    while(q--){
        int type, a, b; cin >> type;
        ll u;
        cin >> a;
        a--;
        if(type==1){
            cin >> b >> u;
            b--;
            update(1, 0, n-1, u, a, b);
        }
        else{
            cout << query(1, a, 0, n-1) << el;
        }
    }
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/