#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false)
#define lcm(a, b) (a*b / __gcd(a, b))
#define tcs() int testcase; cin >> testcase; while(testcase--)
#define INTMAX (int)(1e9)
#define LLMAX (ll)(1e18)
#define mod int(1e9+7)
#define pymod(a,b) ((b + (a%b)) % b)
#define fi first
#define se second
#define el '\n'


ll n, m;
vector<ll> a(100005, 0);
vector<ll> c(100005, 0);
set<ll> f = {1};
map<pair<ll, ll>, bool> mp;

ll power(ll a, ll b){
    if(b==0) return 1;
    if(b==1) return a;
    if(b&1) return (power(a, b/2) * power(a, b/2) * a) % 998244353;
    else return (power(a, b/2) * power(a, b/2)) % 998244353;
}

int main()
{
    Mob;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
        f.insert(a[i]);
    }
    for(int i=0; i<n; i++){
        ll b; cin >> b;
        a[i] = pymod(power(a[i], b), 998244353);
        f.insert(a[i]);
    }
    cin >> m;
    for(int i=0; i<m; i++){
        cin >> c[i];
        f.insert(c[i]);
    }
    for(int i=0; i<m; i++){
        ll d; cin >> d;
        c[i] = pymod(power(c[i], d), 998244353);
        f.insert(c[i]);
    }
    ll x = 1, y = 1;
    for(int i=0; i<n; i++) x = pymod((x * a[i]), 998244353);
    for(int i=0; i<m; i++) y = pymod((y * c[i]), 998244353);
    ll p, q, res = 0;
    for(auto k : f){
        p = pymod(y * k, 998244353); q = pymod(x / k, 998244353);
        cout << p << ' ' << q << ' ';
        if(lcm(p, q)==x and __gcd(p, q)==y and !mp[make_pair(p, q)]) {res++; cout << 'o';}
        cout << el;
        mp[make_pair(p, q)] = true;
    }
    for(auto k : f){
        q = pymod(y * k, 998244353); p = pymod(x / k, 998244353);
        cout << p << ' ' << q << ' ';
        if(lcm(p, q)==x and __gcd(p, q)==y and !mp[make_pair(p, q)]) {res++; cout << 'o';}
        cout << el;
        mp[make_pair(p, q)] = true;
    }
    for(auto i : f) cout << i << ' ';
    cout << el;
    cout << res << el;
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/