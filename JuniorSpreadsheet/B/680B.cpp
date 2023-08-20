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


int main()
{
    Mob;
    int n, a; cin >> n >> a;
    int t[n+1];
    for(int i=1; i<=n; i++) cin >> t[i];
    int res = 0;
    if(t[a]) res++;
    int l = a-1;
    int r = a+1;
    while(l > 0 or r <= n){
        if(t[l] and t[r]){
            if(l>0) res++;
            if(r<=n) res++;
        }
        if(l>0) l--;
        if(r<=n) r++;
    }
    cout << res << endl;
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/