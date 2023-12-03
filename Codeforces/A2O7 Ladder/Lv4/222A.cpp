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


int n, m, k;
char arr[505][505];
bool visited[505][505];
int w = 0;
int v = 0;

void dfs(int i, int j){
    if(i<0 || i>=n || j<0 || j>=m || visited[i][j]) return;
    if(arr[i][j]=='#') return;
    visited[i][j] = true;
    v++;
    if(v>n*m-w-k) arr[i][j] = 'X';
    dfs(i+1, j);
    dfs(i-1, j);
    dfs(i, j+1);
    dfs(i, j-1);
}

int main(){
    Mob;
    cin >> n >> m >> k;
    for(int i=0; i<n; i++) for(int j=0; j<m; j++) cin >> arr[i][j];
    for(int i=0; i<n; i++) for(int j=0; j<m; j++) if(arr[i][j]=='#') w++;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]=='.'){
                dfs(i, j);
                break;
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++) cout << arr[i][j];
        cout << el;
    }
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/