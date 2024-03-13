#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false); cin.tie(NULL);
#define init(arr,n,x) for(int idxdx=0; idxdx<n; idxdx++) arr[idxdx] = x;
#define lcm(a,b) (a*b / __gcd(a, b))
#define tcs() int testcase; cin >> testcase; for(int tecs=0; tecs<testcase; tecs++)
#define el "\n"

int n; 
string arr[2];
string res;
int cnt = 1;

void dfs(string s, int i, int j){
    if(i==2 || j>=n){
        return;
    }
    s += arr[i][j];
    if(i==1 && j==n-1){
        if(res.compare(s)>0){
            res = s;
            cnt = 1;
        } else if(res.compare(s)==0) cnt++;
        return;
    }
    dfs(s, i+1, j);
    dfs(s, i, j+1);
}

void solve(){
    cin >> n;
    cin >> arr[0] >> arr[1];
    res.clear();
    for(int i=1; i<=n; i++) res += '2';
    dfs("", 0, 0);
    cout << res << el << cnt << el;
}

int main(int argc, char const* argv[]){
    Mob;
    tcs() solve();
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/