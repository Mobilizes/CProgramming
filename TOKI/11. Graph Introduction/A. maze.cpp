#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <list>
#include <array>
#include <deque>

#define Mob ios_base::sync_with_stdio(false)
#define lcm(a, b) (a*b / __gcd(a, b))
#define INTinf 1e9
#define LLinf 1e18
#define module 1e9+7
#define fi first
#define se second

typedef long long ll;

using namespace std;

int n, m;
int arr[105][105];
int dis[105][105];
bool vis[105][105];
int h[4] = {0, 0, 1, -1};
int v[4] = {1, -1, 0, 0};
int a, b, x, y, kika, atba;
queue<pair<int, int>> q;

int bfs()
{
	q.push({a, b});
	dis[a][b] = 1;
	vis[a][b] = true;
	while(!q.empty())
	{
		x = q.front().fi;
		y = q.front().se;
		q.pop();
		if(x==1 || x==n || y==1 || y==m) return dis[x][y];
		for(int i=0; i<4; i++)
		{
			kika = x + h[i];
			atba = y + v[i];
			if(!vis[kika][atba] and arr[kika][atba]==0)
			{
				dis[kika][atba] = dis[x][y] + 1;
				q.push({kika, atba});
				vis[kika][atba] = true;
			}
		}
	}
}

int main()
{
	Mob;
	cin >> n >> m;
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=m; j++)
		{
			cin >> arr[i][j];
			if(arr[i][j]==-1) arr[i][j] = 1;
		}
	}
	cin >> a >> b;
	cout << bfs();
	return 0;
}