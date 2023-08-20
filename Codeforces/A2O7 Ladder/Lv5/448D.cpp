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


ll n, m, k; 

ll calc(ll mid){
    ll res = 0;
    --mid;
    for(int i=1; i<=n; i++) res += min(m, mid/i);
    return res;
}

int main()
{
    Mob;
    cin >> n >> m >> k;
    ll l = 1, r = n*m+1;
    while(l<r){
        int mid = (l+r)/2;
        if(calc(mid)<k) l = mid+1;
        else r = mid;
    }
    cout << l-1 << endl;
    return 0;
}

// https://codeforces.com/problemset/problem/448/D
// dont submit until you understand what the fuck is min(m, mid/i)