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

string a, b;
unordered_map<string, vector<string>> down;
vector<string> path, ans;

void dfs(string s){
    for(auto i : down[s]){
        path.push_back(i);
        dfs(i);
        path.pop_back();
    }
    if(((path.front()==a and path.back()==b) || (path.front()==b and path.back()==a)) and ans.empty()){
        for(auto i : path) ans.push_back(i);
    }
}

int main()
{
    Mob;
    int n, m; cin >> n >> m;
    for(int i=0; i<m; i++){
        cin >> a >> b;
        down[a].push_back(b);
    }
    cin >> a >> b;
    path.push_back(a);
    dfs(a);
    path.clear();
    path.push_back(b);
    dfs(b);
    if(ans.empty()) cout << "TIDAK MUNGKIN" << el;
    else for(auto i : ans) cout << i << el;
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/