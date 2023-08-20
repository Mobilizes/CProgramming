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


int main()
{
    Mob;
    testcases(t){
        int n; cin >> n;
        vector<ll> vec(n+1);
        ll res = 0;
        ll mn = INT_MAX;
        bool oddneg = false;
        for(int i=0; i<n; i++){
            cin >> vec[i];
            res += abs(vec[i]);
            mn = min(abs(vec[i]), mn);
            if(vec[i]<=0) if(oddneg) oddneg = false; else oddneg = true;
        }
        if(oddneg) cout << res - mn*2 << eL;
        else cout << res << eL;
    }
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/