#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false)
#define lcm(a, b) (a*b / __gcd(a, b))
#define tcs() int testcase; cin >> testcase; while(testcase--)
#define INTinf (int)(1e9)
#define LLinf (ll)(1e18)
#define mod int(1e9+7)
#define pymod(a,b) ((b + (a%b)) % b)
#define fi first
#define se second
#define el '\n'


int main()
{
    Mob;
    int n, q; cin >> n >> q;
    vector<ll> prefixsum(n+1, 0);
    for(int i=1; i<=n; i++){
        cin >> prefixsum[i];
        prefixsum[i] += prefixsum[i-1];
    }
    for(int i=0; i<q; i++){
        int a, b; cin >> a >> b;
        ll sum = prefixsum[b];
        sum -= prefixsum[a-1];
        cout << sum << endl;
    }
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/