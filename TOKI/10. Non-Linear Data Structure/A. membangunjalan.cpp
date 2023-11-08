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

vector<vector<int>> adj(100001, vector<int>());

bool dfs(int a, int target, vector<bool> &visited){
    if(visited[a]) return false;
    if(a==target) return true;
    bool res = false;
    visited[a] = true;
    for(auto i : adj[a]){
        if(!visited[i]) res |= dfs(i, target, visited);
    }
    return res;
}

int main(){
    Mob;
    int n, q; cin >> n >> q;
    for(int i=0; i<q; i++){
        int t, a, b; cin >> t >> a >> b;
        if(t==1){
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        if(t==2){
            vector<bool> visited(100001, false);
            bool res = dfs(a, b, visited);
            if(res) printf("Y\n");
            else printf("T\n");
        }
    }
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/