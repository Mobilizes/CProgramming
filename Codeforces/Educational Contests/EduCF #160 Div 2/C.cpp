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

int m;
vector<ll> x;
map<pair<ll, ll>, bool> vis;
map<pair<ll, ll>, bool> memo;
bool flag = false;

bool dp(ll i, ll sum){
    int n = x.size();
    if(vis[{i, sum}]) return memo[{i, sum}];
    vis[{i, sum}] = true;
    if(i<0) return sum==0;
    if(sum<0) return false;
    if(sum==0) return memo[{i, sum}] = true;
    return memo[{i, sum}] = dp(i-1, sum) || dp(i-1, sum-x[i]);
}

int main(){
    Mob;
    // for(int i=0; i<100000-1; i++) cout << "1 0\n";
    cin >> m;
    for(int i=0; i<m; i++){
        int n = x.size();
        int t; cin >> t;
        if(t==1){
            ll temp; cin >> temp;
            x.push_back(1 << temp);
        }
        if(t==2){
            ll w; cin >> w;
            if(dp(n-1, w)) cout << "YES" << el;
            else cout << "NO" << el;
        }
    }
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/
