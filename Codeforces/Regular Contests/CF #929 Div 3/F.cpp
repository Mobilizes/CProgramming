#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false); cin.tie(NULL);
#define init(arr,n,x) for(int idxdx=0; idxdx<n; idxdx++) arr[idxdx] = x;
#define lcm(a,b) (a*b / __gcd(a, b))
#define tcs() int testcase; cin >> testcase; for(int tecs=0; tecs<testcase; tecs++)
#define el "\n"

int n, m;
int arr[1001][1001];
vector<vector<int>> rock(1001); // rock[column][row];
int movex[3] = {0, 1, -1};
int movey[3] = {1, 0, 0};

void solve(){
    rock.clear();
    cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> arr[i][j];
            if(arr[i][j]==1){
                rock[j].push_back(i);
            }
        }
    }
    queue<array<int, 3>> q;
    q.push({0, 0, 0});
    while(!q.empty()){
        int x = q.front()[0], y = q.front()[1], t = q.front()[2];
        if(x==n-1 && y==n-1){
            cout << t-1 << el;
            return;
        }
        q.pop();
        if(x<0 || x>=n || y<0 || y>=n) continue;
        bool flag = false;
        for(int i=0; i<rock[y].size(); i++){
            if(x == (rock[y][i] + t) % n) flag = true;
        }
        if(flag) continue;

        for(int i=0; i<3; i++){
            int a = (x + movex[i]) % n;
            int b = y + movey[i];
            int c = t + 1;
            q.push({a, b, c});
        }
    }
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