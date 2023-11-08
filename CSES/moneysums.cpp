#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false); cin.tie(NULL);
#define init(arr,n,x) for(int i=0; i<n; i++) arr[i] = x;
#define lcm(a,b) (a*b / __gcd(a, b))
#define tcs() int testcase; cin >> testcase; while(testcase--)
#define INTMAX (int)(1e9)
#define LLMAX (ll)(1e18)
#define mod int(1e9+7)
#define pymod(a,b) ((b + (a%b)) % b)
#define fi first
#define se second
#define el '\n'

int n;
int arr[101];
bool dp[101][100001];

int main(){
    Mob;
    cin >> n;
    for(int i=0; i<n; i++) cin >> arr[i];
    dp[0][0] = true;
    for(int i=1; i<=100; i++) for(int j=1; j<=100000; j++) dp[i][0] = false;
    for(int i=1; i<=n; i++){
        for(int k=0; k<=100000; k++){
            dp[i][k] = dp[i-1][k];
            int prev = k - arr[i-1];
            if(prev>=0 and dp[i-1][prev]) dp[i][k] = true;
        }
    }
    int ln = 0;
    for(int i=1; i<=100000; i++) if(dp[n][i]) ln++;
    cout << ln << el;
    for(int i=1; i<=100000; i++) if(dp[n][i]) cout << i << ' ';
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/