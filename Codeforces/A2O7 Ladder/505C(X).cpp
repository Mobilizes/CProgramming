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

int n, d; 
int furthest = 0;
int dp[30001];
map<int, int> mp;

int dfs(int prev, int curr){
    cout << prev << ' ' << curr << endl;
    int l = curr-prev;
    if(dp[curr]!=0) return dp[curr];
    if(l<=0 or curr>furthest) return 0;
    dp[curr] = mp[curr] + max(dfs(curr, curr+l-1), max(dfs(curr, curr+l), dfs(curr, curr+l+1)));
    return dp[curr];
}

int main()
{
    Mob;
    cin >> n >> d;
    for(int i=0; i<=30000; i++){
        mp[i] = 0;
        dp[i] = 0;
    }
    for(int i=0; i<n; i++){
        int v; cin >> v;
        mp[v]++;
        furthest = max(furthest, v);
    }
    cout << dfs(0, d) << endl;
    return 0;
}
// unfinished, i suck