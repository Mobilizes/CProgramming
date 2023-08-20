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
#define eL '\n'


bool compare(pair<int, int> a, pair<int, int> b){
    if(a.fi==b.fi) return a.se < b.se;
    return a.fi < b.fi;
}


int main()
{
    Mob;
    testcases(t){
        ll n; cin >> n;
        ll res = 0;
        vector<pair<ll, ll>> vec(n+5, pair<ll, ll>(0, 0));
        for(int i=1; i<=n; i++){
            cin >> vec[i].fi;
            vec[i].se = i;
        }
        vector<pair<ll, ll>> dp;
        for(int i=1; i<=n; i++){
            if(vec[i].fi<i) dp.push_back(pair<ll, ll>(vec[i].fi, i));
        }
        int m = dp.size();
        sort(dp.begin(), dp.end(), compare);
        for(int i=0; i<m; i++){
            int l=i, r=m-1, mid;
            while(l<=r){
                mid = l+(r-l)/2;
                if(dp[mid].fi<dp[i].se+1) l = mid + 1;
                else r = mid - 1;
            }
            if(dp[l].fi<=dp[i].se) continue;
            res += m - l;
        }
        cout << res << eL;
    }
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/