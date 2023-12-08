#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false)
#define lcm(a, b) (a*b / __gcd(a, b))
#define testcases(t) int t; cin >> t; while(t--)
#define INTinf (int)(1e9)
#define LLinf (ll)(1e18)
#define mod int(1e9+7)
#define pymod(a,b) ((b + (a%b)) % b)
#define fi first
#define se second
#define el '\n'

int n, m;
int ax, ay;
int bx, by;
queue<pair<int, int>> q;
char arr[1005][1005], path[1005][1005], ans[1000005];
bool vis[1005][1005];
int dist[1005][1005];
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, 1, -1};
string s = "UDRL";

int main()
{
	Mob;
	cin >> n >> m;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin >> arr[i][j];
			if(arr[i][j]=='A'){
				ax = i;
				ay = j;
			}
			if(arr[i][j]=='B'){
				bx = i;
				by = j;
			}
		}
	}
	q.push({ax, ay});
	vis[ax][ay] = true;
	dist[ax][ay] = 0;
	while(!q.empty()){
		int a = q.front().fi;
		int b = q.front().se;
		q.pop();
		for(int i=0; i<4; i++){
			int px = a + dx[i];
			int py = b + dy[i];
			if(px<0 or px>=n or py<0 or py>=m) continue;
            if(arr[px][py]=='#') continue;
            if(vis[px][py]) continue;
            vis[px][py] = true;
            dist[px][py] = dist[a][b] + 1;
            path[px][py] = s[i];
            q.push({px, py});
		}
	}
	if(!vis[bx][by]){
		cout << "NO" << el;
		return 0;
	}
	cout << "YES" << el;
	cout << dist[bx][by] << el;
	int tx = bx;
	int ty = by;
	for(int i=dist[bx][by]; i>0; i--){
		ans[i] = path[tx][ty];
		if(ans[i]==s[0]) tx -= dx[0];
		else if(ans[i]==s[1]) tx -= dx[1];
		else if(ans[i]==s[2]) ty -= dy[2];
		else if(ans[i]==s[3]) ty -= dy[3];
	}
	for(int i=1; i<=dist[bx][by]; i++) cout << ans[i];
	cout << el;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cout << path[i][j];
		}
		cout << el;
	}
	return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/