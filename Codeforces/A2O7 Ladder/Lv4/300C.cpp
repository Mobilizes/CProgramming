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

int a, b, n; 
ll fact[1000010];

ll binpow(ll i, ll z){
    if(!z) return 1;
    if(z&1) return binpow(i, z-1) * i % mod;
    ll res = binpow(i, z/2);
    return (res*res)%mod;
}

bool goodNumber(int i){
    while(i>0){
        if(i%10==a or i%10==b){
            i /= 10;
        } else return false;
    }
    return true;
}

int main()
{
    Mob;
    fact[0] = 1;
    for(int i=1; i<=1000000; i++){
        fact[i] = fact[i-1]*i;
        fact[i] %= mod;
    }
    cin >> a >> b >> n;
    ll res = 0;
    ll factn = fact[n];
    for(int i=0; i<=n; i++){
        ll num = a*i + b*(n-i);
        if(goodNumber(num)){
            res += (factn * binpow(fact[n-i] * fact[i] % mod, mod-2)) % mod;
            res %= mod;
        }
    }
    cout << res << endl;
    return 0;
}

// codeforces.com/problemset/problem/300/C