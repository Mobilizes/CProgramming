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

int n, l, t, a, b;
vector<bool> visited(505, false);
vector<int> jl[505]; // jalan
int ans = INTMAX;

int bfs(){
    int dist = 0;
    queue<pair<int, int>> q;
    q.push({a, 0});
    visited[a] = true;
    bool reach = false;
    while(!q.empty()){
        int u = q.front().first;
        dist = q.front().second;
        q.pop();
        if(u==b){
            reach = true;
            break;
        }
        for(auto i : jl[u]){
            if(!visited[i]){
                visited[i] = true;
                q.push({i, dist+1});
            }
        }
    }
    if(reach) return dist;
    return INTMAX;
}


int main()
{
    Mob;
    cin >> n >> l >> t >> a >> b;
    for(int i=0; i<l; i++){
        int u, v; cin >> u >> v;
        jl[u].push_back(v);
        jl[v].push_back(u);
    }
    for(int i=0; i<t; i++){
        int u, v; cin >> u >> v;
        jl[u].push_back(v);
        jl[v].push_back(u);

        int res = bfs();
        ans = min(res, ans);

        jl[u].pop_back();
        jl[v].pop_back();
        fill(visited.begin(), visited.end(), false);
    }
    cout << ans << el;
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/