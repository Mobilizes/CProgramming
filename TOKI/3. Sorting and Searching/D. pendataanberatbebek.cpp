#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define Mob ios_base::sync_with_stdio(false)
#define lcm(a, b) (a*b / __gcd(a, b))
#define INTinf 1e9
#define LLinf 1e18
#define mod 1000000007

int main()
{
    Mob;
    ll n; cin >> n;
    vector<ll> vec;
    for(ll i=0; i<n; i++){
        ll x; cin >> x;
        vec.push_back(x);
    }
    ll m; cin >> m;
    for(int i=0; i<m; i++){
        ll a, b; cin >> a >> b;
        auto low = upper_bound(vec.begin(), vec.end(), a);
        auto high = upper_bound(vec.begin(), vec.end(), b);
        ll left = low - vec.begin();
        ll right = high - vec.begin();
        cout << right - left << endl;
    }
    return 0;
}