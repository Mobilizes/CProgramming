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


int n;
int x[100005], h[100005];
vector<int> pos(100005, 0);
vector<int> dp(100005, -1);

int solve(int i){
    if(i>=n) return 1;
    if(dp[i]!=-1){
        return dp[i];
    }
    int l = 0, r = 0;
    if (x[i]-h[i]>pos[i-1]) {
		pos[i]=x[i];
		l=solve(i+1)+1;
	}
    if (x[i]+h[i]<x[i+1]) {
		pos[i]=x[i]+h[i];
		r=solve(i+1)+1;
	}
    pos[i] = x[i];
    int s = solve(i+1);
    return dp[i] = max({s, l, r});
}

int main(){
    Mob;
    cin >> n;
    pos[0] = -1000000000;
    for(int i=1; i<=n; i++) cin >> x[i] >> h[i];
    cout << solve(1) << el;
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/