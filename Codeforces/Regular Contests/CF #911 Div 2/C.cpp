#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false); cin.tie(NULL);
#define init(arr,n,x) for(int i=0; i<n; i++) arr[i] = x;
#define lcm(a,b) (a*b / __gcd(a, b))
#define tcs() int testcase; cin >> testcase; for(int tecs=0; tecs<testcase; tecs++)
#define el '\n'

int n;
string s;
vector<pair<int, int>> tree;

int dfs(int idx, int op){
    // cout << idx << ' ' << tree[idx].first << ' ' << tree[idx].second << ' ' << op << el;
    if(idx==0) return INT_MAX;
    if(tree[idx].first==0 && tree[idx].second==0){
        return op;
    }
    if(s[idx-1]=='L'){
        return min(dfs(tree[idx].first, op), dfs(tree[idx].second, op+1));
    } else if(s[idx-1]=='R'){
        return min(dfs(tree[idx].first, op+1), dfs(tree[idx].second, op));
    }
    return min(dfs(tree[idx].first, op+1), dfs(tree[idx].second, op+1));
}

int main(int argc, char const* argv[]){
    Mob;
    tcs(){
        tree.clear();
        cin >> n;
        cin >> s;
        tree.resize(n+5);
        for(int i=1; i<=n; i++){
            cin >> tree[i].first >> tree[i].second;
        }
        cout << dfs(1, 0) << el;
        // cout << el;
    }
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/