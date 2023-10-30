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


int xa, xb, ya, yb;

bool cons(int a, int b){
    return a>=1 and a<=8 and b>=1 and b<=8;
}

int bfs(int x, int y){
    map<pair<int, int>, bool> vis;
    vis[{x, y}] = true;
    queue<vector<int>> q;
    q.push({x, y, 0});
    int res = INTMAX;
    while(!q.empty()){
        int a = q.front()[0];
        int b = q.front()[1];
        int v = q.front()[2];
        q.pop();
        if(a==xb and b==yb) res = min(res, v);
        if(!vis[{a+1, b+2}] and cons(a+1, b+2)){
            vis[{a+1, b+2}] = true;
            q.push({a+1, b+2, v+1});
        }
        if(!vis[{a-1, b+2}] and cons(a-1, b+2)){
            vis[{a-1, b+2}] = true;
            q.push({a-1, b+2, v+1});
        }
        if(!vis[{a+1, b-2}] and cons(a+1, b-2)){
            vis[{a+1, b-2}] = true;
            q.push({a+1, b-2, v+1});
        }
        if(!vis[{a-1, b-2}] and cons(a-1, b-2)){
            vis[{a-1, b-2}] = true;
            q.push({a-1, b-2, v+1});
        }
        if(!vis[{a+2, b+1}] and cons(a+2, b+1)){
            vis[{a+2, b+1}] = true;
            q.push({a+2, b+1, v+1});
        }
        if(!vis[{a-2, b+1}] and cons(a-2, b+1)){
            vis[{a-2, b+1}] = true;
            q.push({a-2, b+1, v+1});
        }
        if(!vis[{a+2, b-1}] and cons(a+2, b-1)){
            vis[{a+2, b-1}] = true;
            q.push({a+2, b-1, v+1});
        }
        if(!vis[{a-2, b-1}] and cons(a-2, b-1)){
            vis[{a-2, b-1}] = true;
            q.push({a-2, b-1, v+1});
        }
    }
    return res;
}

int main()
{
    Mob;
    string a, b;
    while(cin >> a >> b){
        xa = a[0] - 'a' + 1; xb = b[0] - 'a' + 1;
        ya = a[1] - '1' + 1; yb = b[1] - '1' + 1;
        cout << "To get from " << a << " to " << b << " takes " << bfs(xa, ya) << " knight moves.\n";
    }
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/