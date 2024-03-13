#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false); cin.tie(NULL);
#define init(arr,n,x) for(int idxdx=0; idxdx<n; idxdx++) arr[idxdx] = x;
#define lcm(a,b) (a*b / __gcd(a, b))
#define tcs() int testcase; cin >> testcase; for(int tecs=0; tecs<testcase; tecs++)
#define el "\n"

int movex[3] = {1, 2, 0};
int movey[3] = {1, 0, 0};

void solve(){
    int n, m; cin >> n >> m;
    bool arr[n+1][m+1];
    for(int i=0; i<n; i++) for(int j=0; j<m; j++) cin >> arr[i][j];
    bool vis[n+1][m+1];
    for(int i=0; i<n; i++) for(int j=0; j<m; j++) vis[i][j] = arr[i][j];
    queue<array<int, 3>> q;
    q.push({0, 0, 0});
    vis[0][0] = true;
    while(!q.empty()){
        array<int, 3> fr = q.front();
        q.pop();
        int a = fr[0], b = fr[1], c = fr[2];
        cout << a << ' ' << b << ' ' << c << el;
        if(a==((n-1+c) % n) && b==m-1){
            cout << c << el;
            return;
        }
        for(int da=0; da<3; da++){
            int x = (a + movex[da]) % n, y = b + movey[da], t = c + 1;
            if(x<0 || y<0 || x>=n || y>=m) continue;
            if(vis[x][y]) continue;
            q.push({x, y, t});
            vis[x][y] = true;
        }
    }
    cout << "-1" << el;
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