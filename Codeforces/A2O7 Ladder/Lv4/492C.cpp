#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false)
#define lcm(a, b) (a*b / __gcd(a, b))
#define testcases(t) int t; cin >> t; while(t--)
#define INTinf (int)(1e9)
#define LLinf (ll)(1e18)
#define mod int(1e9+7)
#define pymod(a,b) ((b + (a%b)) % b)
#define fi first
#define se second


bool compare(pair<int, int> a, pair<int, int> b){
    return a.se < b.se;
}

int main()
{
    Mob;
    ll n, r, avg; cin >> n >> r >> avg;
    avg *= n;
    pair<int, int> arr[n+1];
    ll sum = 0;
    ll res = 0;
    for(int i=0; i<n; i++){
        cin >> arr[i].fi >> arr[i].se;
        sum += arr[i].fi;
    }
    sort(arr, arr+n, compare);
    for(int i=0; i<n; i++){ 
        if(sum<avg and arr[i].fi!=r){
            sum += r-arr[i].fi;
            res += (r-arr[i].fi) * arr[i].se;
            if(sum>=avg) res -= (sum-avg) * arr[i].se;
        }
    }
    cout << res << endl;
    return 0;
}