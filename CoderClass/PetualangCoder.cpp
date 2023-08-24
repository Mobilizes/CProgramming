#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false)
#define lcm(a, b) (a*b / __gcd(a, b))
#define tcs() int testcase; cin >> testcase; while(testcase--)
#define INTMAX (int)(1e9)
#define LLMAX (ll)(1e18)
#define mod (ll)(1e9+7)
#define pymod(a,b) ((b + (a%b)) % b)
#define fi first
#define se second
#define el '\n'


ll power(ll a, ll b){
    if(b==0) return 1;
    else if(b%2==0) return (power(a, b/2) * power(a, b/2)) % mod;
    else return (a * power(a, b/2) * power(a, b/2)) % mod;
}

int main()
{
    Mob;
    ll n; cin >> n;
    cout << (power(2, n) - 1) % mod << el;
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/