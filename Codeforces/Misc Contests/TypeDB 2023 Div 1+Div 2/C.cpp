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
    testcases(t){
        int n; cin >> n;
        int s; cin >> s;
        ll a[n]; for(int i=0; i<n; i++) cin >> a[i];
        ll x[n], y[n];
		ll dp[n][2];
        for(int i=1; i<n-1; i++){
            if(a[i]>s){
                x[i] = s;
                y[i] = a[i] - s;
            } else{
                x[i] = 0;
                y[i] = a[i];
            }
        }
        x[0] = y[0] = a[0];
		x[n-1] = y[n-1] = a[n-1];
		dp[0][0] = dp[0][1] = 0;
		for(int i=1; i<n; i++){
			dp[i][0] = min(dp[i-1][0] + y[i-1] * x[i], dp[i-1][1] + x[i-1] * x[i]);
			dp[i][1] = min(dp[i-1][0] + y[i-1] * y[i], dp[i-1][1] + x[i-1] * y[i]);
		}
		cout << dp[n-1][0] << endl;
    }
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/