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
    ll arr[n]; for(int i=0; i<n-1; i++) cin >> arr[i];
    vector<ll> res;
    res.push_back(arr[0]);
    for(int i=1; i<n-1; i++) res.push_back(arr[i]-arr[i-1]);
    sort(res.begin(), res.end());
    vector<ll> missing;
    int l = 0;
    res.push_back(LLONG_MAX);
    for(ll i=1; i<=n; i++){
        while(res[l]<i) l++;
        if(res[l]>i) missing.push_back(i); 
    }

    // for(ll i : res) cout << i << ' ';
    // cout << "   ";
    // for(ll i : missing) cout << i << ' ';

    if(missing.size()==1) cout << "YES";
    else if(missing.size()>=3) cout << "NO";
    else{
        int target = missing[0] + missing[1];
        int p = lower_bound(res.begin(), res.end(), target) - res.begin();
        if(res[p]!=target){
            cout << "NO" << el;
            return;
        }
        if(target<=n){
            if(p==res.size()-1){
                cout << "NO" << el;
                return;
            }
            if(res[p+1]!=target){
                cout << "NO" << el;
                return;
            }
        }
        cout << "YES";
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