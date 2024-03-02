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
    ll arr[n]; for(int i=0; i<n; i++) cin >> arr[i];
    if(k>=3){
        cout << 0 << el;
        return;
    }
    sort(arr, arr+n);
    ll mndiff = arr[0];
    for(int i=0; i<n-1; i++) mndiff = min(mndiff, arr[i+1]-arr[i]);
    if(k==1){
        cout << mndiff << el;
        return;
    }
    for(int i=0; i<n; i++) for(int j=0; j<i; j++){
        ll v = arr[i] - arr[j];
        ll p = lower_bound(arr, arr+n, v) - arr;
        if(p<n) mndiff = min(mndiff, arr[p]-v);
        if(p>0) mndiff = min(mndiff, v-arr[p-1]);
    }
    cout << mndiff << el;
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