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


int main()
{
    Mob;
    ll n, a, b; cin >> n >> a >> b;
    ll kpk = lcm(a, b);
    ll l=1, r=1e18, m, res;
    while(l<=r){
        m = (l+r)/2;
        ll t = m/a + m/b - m/kpk;
        if(t>=n){
            r = m-1;
            res = m;
        } else l = m+1;
    }
    cout << res << el;
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/

