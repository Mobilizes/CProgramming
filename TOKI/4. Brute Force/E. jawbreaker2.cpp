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
int temp = 0;
int t = 0;

void rec(int x, int y, int target)
{
	if(x>=0 and y>=0 and x<m and y<n)
	{
		if(!visited[x][y])
		{
			visited[x][y] = true;
			if(arr[x][y]==target)
			{
				temp++;
				rec(x+1, y, target);
				rec(x-1, y, target);
				rec(x, y+1, target);
				rec(x, y-1, target);
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
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			temp = 0;
			rec(i, j, arr[i][j]);
			t = max(temp, t);
			for(int k=0; k<m; k++)
			{
				for(int l=0; l<n; l++)
				{
					visited[k][l] = false;
				}
			}
		}
	}
	cout << t * (t-1) << endl;
	return 0;
}

//https://tlx.toki.id/courses/competitive/chapters/04/problems/E