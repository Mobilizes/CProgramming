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


ll findmx(ll n, ll m){
    ll x = n-m;
    return x/4;
}

ll findmn(ll n, ll m){
    ll x = n - m*4;
    return x;
}

int main()
{
    Mob;
    ll n, m; cin >> n >> m;
    if(n>m*5 or n<m){
        cout << "-1 -1" << el;
    } else {
        ll mx, mn;
        mx = findmx(n, m);
        mn = findmn(n, m);
        cout << max(0LL, mn) << ' ' << max(0LL, mx) << el;
    }
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/

/*
14
1 3 5 5
*/

/*
24
2 2 1 1 1 1 1 5 5 5
*/

/*
22
1 1 1 1 1 1 1 5 5 5
*/

/*
35
2 1 1 1 5 5 5 5 5 5
*/

/*
40
1 1 1 1 2 1 1 1 1 5 5 5 5 5 5
*/