#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false); cin.tie(NULL);
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
    int n; cin >> n;
    int arr[n+5]; for(int i=1; i<=n; i++) cin >> arr[i];
    int dp[n+5][3];
    for(int i=0; i<=2; i++) dp[0][i] = 0;
    for(int i=1; i<=n; i++){
        dp[i][0] = min({dp[i-1][0], dp[i-1][1], dp[i-1][2]})+1;
        if(arr[i]==1 || arr[i]==3) dp[i][1] = min(dp[i-1][0], dp[i-1][2]);
        else dp[i][1] = dp[i-1][1] + 1;
        
        if(arr[i]==2 || arr[i]==3) dp[i][2] = min(dp[i-1][0], dp[i-1][1]);
        else dp[i][2] = dp[i-1][2] + 1;
    }
    cout << min({dp[n][0], dp[n][1], dp[n][2]}) << el;
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/

// 3 2 3 3 3 2 3 1 3 2 2 3 2 3 3 3 3 3 3 1 2 2 3 1 3 3 2 2 2 3 1 0 3 3 3 2 3 3 1 1 3 1 3 3 3 1 3 1 3 0 1 3 2 3 2 1 1 3 2 3 3 3 2 3 1 3 3 3 3 2 2 2 1 3 1 3 3 3 3 1 3 2 3 3 0 3 3 3 3 3 1 0 2 1 3 3 0 2 3 3
// 1 2 1 2 1 2 1 0 1 2 0 1 2 1 2 1 2 1 2 1 2 0 2 1 2 1 2 0 2 1 0 0 1 2 1 2 1 2 1 0 2 1 2 1 2 1 2 1 2 0 1 2 0 1 2 1 0 1 2 1 2 1 2 1 0 1 2 1 2 0 2 0 1 2 1 2 1 2 1 0 1 2 1 2 0 1 2 1 2 1 0 0 2 1 2 1 0 2 1 2