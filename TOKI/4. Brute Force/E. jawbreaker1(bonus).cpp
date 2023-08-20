#include <bits/stdc++.h>

#define Mob ios_base::sync_with_stdio(false)
#define lcm(a, b) (a*b / __gcd(a, b))
#define INTinf 1e9
#define LLinf 1e18
#define mod 1000000007

typedef long long ll;

using namespace std;

int m, n;
int arr[26][26];
bool visited[26][26];
int a, z;
int target;
int t = 0;

void rec(int x, int y)
{
	if(x>=0 and y>=0 and x<m and y<n)
	{
		if(!visited[x][y])
		{
			visited[x][y] = true;
			if(arr[x][y]==target)
			{
				t++;
				rec(x+1, y);
				rec(x-1, y);
				rec(x, y+1);
				rec(x, y-1);
			}
		}
	}
}

int main()
{
	Mob;
	cin >> m >> n;
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
		{
			cin >> arr[i][j];
		}
	cin >> a >> z;
	target = arr[a][z];
	rec(a, z);
	cout << t * (t-1) << endl;
	return 0;
}

// https://tlx.toki.id/courses/basic/chapters/13/problems/G