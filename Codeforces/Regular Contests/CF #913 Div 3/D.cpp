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

ll a[200005], b[200005];
ll target[200005];
ll n;

ll intersect(ll ai, ll bi, ll i){
    if(i>=n-1){
        if(target[i-1]==-1) return target[i] = (ai+bi)/2;
        return target[i] = target[i-1];
    }
    if(target[i]!=-1) return target[i];

    if((ai<=a[i+1] && bi>=b[i+1])) target[i] = intersect(a[i+1], b[i+1], i+1);
    else if(ai>=a[i+1] && bi<=b[i+1]) target[i] = intersect(ai, bi, i+1);
    else if(ai<=b[i+1] && ai>a[i+1]) target[i] = intersect(ai, b[i+1], i+1);
    else if(bi>=a[i+1] && bi<b[i+1]) target[i] = intersect(a[i+1], bi, i+1);
    else if(bi<a[i+1] && bi<b[i+1]) target[i] = bi;
    else if(ai>b[i+1] && ai>a[i+1]) target[i] = ai;

    return target[i];
}

/*
3 8 (8)
10 18 (10)
6 11
*/

bool find(ll k){
    ll curr = 0;
    for(ll i=0; i<n-1; i++){
        if(target[i]>curr) curr = min(curr+k, target[i]);
        else if(target[i]<curr) curr = max(curr-k, target[i]);
        // cout << curr << ' ';
        if(curr<a[i] && curr<b[i]) return false;
        else if(curr>a[i] && curr>b[i]) return false;
    }
    if(curr>b[n-1]) curr = max(curr-k, a[n-1]);
    else if(curr<a[n-1]) curr = min(curr+k, b[n-1]);

    if(curr<a[n-1] && curr<b[n-1]) return false;
    else if(curr>a[n-1] && curr>b[n-1]) return false;
    return true;
}

/*
1 2 (2)
3 5 (*3(4, 5)->4)
4 6 (4)
2 3
2 3
*/

int main(){
    Mob;
    tcs(){
        cin >> n;
        for(ll i=0; i<n; i++) cin >> a[i] >> b[i];
        for(ll i=0; i<n; i++) target[i] = -1;
        for(ll i=0; i<n; i++) intersect(a[i], b[i], i);
        // for(int i=0; i<n; i++) cout << target[i] << ' ';
        // cout << el;
        ll l=0, r=1000000000;
        while(l<r){
            ll m = l+(r-l)/2;
            // cout << find(m) << ' ' << m << el;
            if(find(m)) r = m;
            else l = m + 1;
        }
        cout << l << el;
    }
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/