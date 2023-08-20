#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false)
#define lcm(a, b) (a*b / __gcd(a, b))
#define testcases(t) while(t--)
#define INTinf (int)(1e9)
#define LLinf (ll)(1e18)
#define mod int(1e9+7)
#define pymod(a,b) ((b + (a%b)) % b)


int main()
{
    Mob;
    ll n, v; cin >> n >> v;
    map<ll, ll> mp; for(int i=0; i<=3001; i++) mp[i] = 0;
    for(int i=0; i<n; i++){
        ll a, b; cin >> a >> b;
        mp[a] = b;
    }
    ll res = 0;
    ll pre = 0, now = 0;
    for(int i=1; i<=3001; i++){
        now = mp[i];
        if(pre + now <= v){
            res += pre + now;
            pre = 0;
        } else{
            res += v;
            ll t = max(v-pre, (ll)(0));
            pre = now - t;
        }
    }
    cout << res << endl;
    return 0;
}
// copy and pasted the solution, still wrong answer, bullshit problem